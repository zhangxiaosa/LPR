# Artifact for "LPR: Large Language Models-Aided Program Reduction"

## Introduction

Thank you for evaluating this artifact!

To evaluate this artifact, a Linux machine with [docker](https://docs.docker.com/get-docker/) installed is needed.

### List of Claims Supported by the Artifact

- LPR is more effective than Vulcan.

- LPR is on par with Vulcan in terms of efficiency. LPR is more efficient than Vulcan on complex programs.

- LPR generalizes well on C, Rust and JavaScript.

- To evaluate LPR, access to LLMs is required. You need either use gpt-3.5-turbo APIs or run codellama-2 on your server.

- The output of LLM is non-deterministic, so you may not exactly reproduce the previous results. 
To ease the artifact evaluation, we include the previous results.

### Notes

- All the experiments take long time to finish, so it is recommended to use tools like screen and tmux to manage sessions if the experiments are run on remote server. We also provide flags for multi-processing.

- The evaluation results of LPR may not exactly the same as shown in the paper, because LLMs have internal randomness. Replicating the experiments for multiple times will mitigate such impact. However, the deviation should be trivial, and the results should still support the original claims in the paper.

- It is possible for remote calls to LLMs to lose connection and raise exceptions, because the resource for user to invoke LLMs might be limited. Therefore, we add logics and scripts for quick restart from the intermediate results.

### Docker Environment Setup

1. If docker is not installed, install it by following the [instructions](https://docs.docker.com/get-docker/).
2. Install the docker image.

   ```bash
   docker pull codesubmission278/lpr:latest
   # This step might takes a while, mainly depending on the network bandwidth. It also takes up much disk space (nearly 80GB)
   ```

3. Start a container.

   ```bash
   docker container run --cap-add SYS_PTRACE --interactive --tty codesubmission278/lpr:latest /bin/bash
   # You should be at /tmp after the above command finishes
   # Your user name should be `coq` and all the following command are executed in docker

   # the root folder of the project is /tmp/LPR/
   cd /tmp/LPR/
   ```

### Benchmark Suites

In this project,
benchmark suite are in folder `./benchmark_suites`.

1. `./benchmark_suites/c`: 20 benchmarks in C (Benchmark-C).

2. `./benchmark_suites/rust`: 20 benchmarks in Rust (Benchmark-Rust).

3. `./benchmark_suites/js`: 10 benchmarks in JavaScript (Benchmark-JS).

In each folder, there are several versions, including the original benchmark and results of each reducer.
For example, in C benchmark suite:
- `./benchmark_suites/c/original`: Original benchmarks
- `./benchmark_suites/c/perses`: Results of Perses
- `./benchmark_suites/c/perses_rename`: Results of Perses (variable renamed)
- `./benchmark_suites/c/vulcan`: Results of Vulcan
- `./benchmark_suites/c/creduce`: Results of C-Reduce
- `./benchmark_suites/c/lpr_{i}`: Results of LPR (i-th run)

### Previous Results

Besides some previous results in `./benchmark_suites`, 
more detailed outputs of LPR are stored in `./old_results`.

### Reproduce RQ1 & RQ2: the Effectiveness and Efficiency of Perses, Vulcan, C-Reduce and LPR.

1. Run Perses.

```bash
cd /tmp/LPR/
# run perses on Benchmark-C
python3 scripts/run_perses.py --benchmark-suite /tmp/LPR/benchmark_suites/c/original/ --max-jobs 8
# "--max_jobs" enables running multiple benchmarks concurrently
# "--benchmark-suite" specifies the benchmark suite to evaluate on
```

Assume the current code version is 1234567 (github --version), then the results will be stored in:

> ./results/1234567/scripts_run_perses_py_benchmark_suite_tmp_gpt_reduction_benchmark_suites_c_original_max_jobs_8/

To get summarized information

```bash
python summarize_perses_or_vulcan.py ./results/1234567/scripts_run_perses_py_benchmark_suite_tmp_gpt_reduction_benchmark_suites_c_original_max_jobs_8/
```

2. Run Vulcan

```bash
# Similar to how we run Perses:
cd /tmp/LPR/
python3 scripts/run_vulcan.py --benchmark-suite /tmp/LPR/benchmark_suites/c/original/ --max-jobs 8
```

To get summarized information

```bash
python summarize_perses_or_vulcan.py ./results/1234567/scripts_run_vulcan_py_benchmark_suite_tmp_gpt_reduction_benchmark_suites_c_original_max_jobs_8/
```

3. Run C-Reduce

```bash
# Similar to how we run Perses:
cd /tmp/LPR/
python3 scripts/run_vulcan.py --benchmark-suite /tmp/LPR/benchmark_suites/c/original/ --max-jobs 8
```

To get summarized information

```bash
python summarize_creduce.py ./results/1234567/scripts_run_creduce_py_benchmark_suite_tmp_gpt_reduction_benchmark_suites_c_original_max_jobs_8/
```

4. Run LPR
   
Before running LPR, we need to add an OPENAI_API_KEY to the environment variable.

```bash
export OPENAI_API_KEY=sk-xxxxxxx
```

```bash
cd /tmp/LPR/
python scripts/run_gpt_reduction.py --benchmark-suite /tmp/LPR/benchmark_suites/c/perses_results_rename --id 0
# In case the invocation of LLMs timeouts and terminates the whole process, we can wrap the command line with ./scripts/keep_running.sh, which continues to run the given command until it exits with 0.
./scripts/keep_running.sh "python scripts/run_gpt_reduction.py --benchmark-suite /tmp/LPR/benchmark_suites/c/perses_results_rename --id 0"
# flag "--id" helps to distinguish the id of runs for data storage. In the next run, if all other flags are identical, use "--id 1" to prevent the dulicated result folder.
```

To get summarized information

```bash
python ./scripts/summarize_gpt.py ./results/1234567/scripts_run_gpt_reduction_py_benchmark_suite_tmp_gpt_reduction_benchmark_suites_c_perses_results_rename_id_0/
```

5. Run Vulcan on LPR's results

```bash
# Similar to how we run Vulcan alone
cd /tmp/LPR/
python3 scripts/run_vulcan.py --benchmark-suite /tmp/LPR/benchmark_suites/c/lpr_0/ --max-jobs 8
```

To get summarized information

```bash
python summarize_perses_or_vulcan.py ./results/1234567/scripts_run_vulcan_py_benchmark_suite_tmp_LPR_benchmark_suites_c_lpr_0_max_jobs_8/
```


### Reproduce RQ3: Effectiveness of Each Transformation.

To reproduce the size change analysis displayed in Figure 4, Figure 5 and Figure 6 in the paper, please run:

```bash
# This script may take 2-3 minutes
./scripts/analyze_and_draw.sh
```
This script collects and analyzes data in the folder `./old_results/c/multi_level/`,
which consists of logs and intermediate results from LPR in 5 runs under the default setting. 
While these results are not exactly the same as those used in the paper, the differences are minimal. 
This is due to the fact that these results are from reruns, as the original results were unfortunately misplaced. 
Nevertheless, this also demonstrates the robustness of LPR despite of the nondeterministic nature of LLMs, 
as the rerun results closely align with the original outcomes.

After the execution of the above command, pdf files is saved under 
`./old_results/c/multi_level/`, you can compare such files with Figures in the paper.
- Figure 4: `size_changes_boxplot_*.pdf`
- Figure 5: `size_changes_piechart.pdf`
- Figure 6: `size_changes_barchart.pdf`

### Other Experiments

To specify another version of GPT instead of the default "gpt-3.5-turbo-0613", use flag "--llm-version", for example:

```bash
python scripts/run_gpt_reduction.py --benchmark-suite /tmp/LPR/benchmark_suites/c/perses_results_rename --llm-version gpt-3.5-turbo-1106 --id 0
```

To specify the temperature, use flag "--temperature", for example:

```bash
python scripts/run_gpt_reduction.py --benchmark-suite /tmp/LPR/benchmark_suites/c/perses_results_rename --temperature 0.5 --id 0
```
