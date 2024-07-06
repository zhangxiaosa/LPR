# Artifact for "LPR: Large Language Models-Aided Program Reduction"


Thank you for evaluating this artifact!

To evaluate this artifact, a Linux machine with [docker](https://docs.docker.com/get-docker/) installed is needed.

### List of Claims Supported by the Artifact

- LPR is more effective than Vulcan.

- LPR is on par with Vulcan in terms of efficiency. LPR is more efficient than Vulcan on complex programs.

- LPR generalizes well on C, Rust and JavaScript.

- To evaluate LPR, access to LLMs is required. You need either use gpt-3.5-turbo APIs or run CodeLlama on your server.

- The output of LLM is non-deterministic, so you may not exactly reproduce the previous results. 
To ease the artifact evaluation, we include the precomputed results.

### Notes

- All the experiments take long time to finish, so it is recommended to use tools like screen and tmux to 
manage sessions if the experiments are run on remote server. We also provide flags for multi-processing.

- The evaluation results of LPR may not exactly the same as shown in the paper, 
because LLMs have internal randomness. Replicating the experiments for multiple times will mitigate such impact. 
However, the deviation should be trivial, and the results should still support the original claims in the paper.

- It is possible for remote calls to LLMs to lose connection and raise exceptions, 
because the resource for user to invoke LLMs might be limited. 
Therefore, we add logics and scripts for quick restart from the intermediate results.

### Folder Structure
In the Github repository, the folder structure is as follows:
- README.md: The readme file
- scripts: scripts and programs to run the experiments and analyze the results
- prompts: prompt files to guide the LLMs
- benchmark_suites: benchmarks used for evaluation
  - c: 20 C programs
  - rust: 20 rust programs
  - js: 10 JavaScript programs
- tools: tools used in LPR or for evaluation
  - perses_deploy.jar: Perses
  - vulcan_deploy.jar: Vulcan
  - token_counter_deploy.jar: a token counter tool
- precomputed_results: precomputed results for artifact evaluation.
Since rerunning the results is time-consuming and requires access to LLMs, 
we have precomputed some results for convenience.

### Docker Environment Setup

1. If docker is not installed, install it by following the [instructions](https://docs.docker.com/get-docker/).
2. Install the docker image.

   ```bash
   docker pull m492zhan/lpr:latest
   # This step might takes a while, mainly depending on the network bandwidth. It also takes up much disk space (nearly 80GB)
   ```

3. Start a container.

   ```bash
   docker container run --cap-add SYS_PTRACE --interactive --tty m492zhan/lpr:latest /bin/bash
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

In each folder, there are several versions, including the original benchmarks and precomputed results of each reducer.
For example, in C benchmark suite:
- `./benchmark_suites/c/original`: Original benchmarks
- `./benchmark_suites/c/perses`: Results of Perses
- `./benchmark_suites/c/perses_rename`: Results of Perses (variable renamed)
- `./benchmark_suites/c/vulcan`: Results of Vulcan
- `./benchmark_suites/c/creduce`: Results of C-Reduce
- `./benchmark_suites/c/lpr_{i}`: Results of LPR (i-th run)

### Previous Results

Besides some previous results in `./benchmark_suites`, 
more detailed outputs of LPR under various settings are stored in `./precomputed_results`.
- c
  - multi_level: default settings (temperature=1, multi-level prompt, gpt-3.5-turbo-0125)
  - single_level: single-level prompt
  - t_0: temperature=0
  - t_0.25: temperature=0.25
  - t_0.5: temperature=0.5
  - t_0.75: temperature=0.75
  - codellama_13b: CodeLlama-13b-Instruct-hf
  - codellama_34b: CodeLlama-34b-Instruct-hf
- rust
  - multi_level: same as above
- js
  - multi_level: same as above
  

### Reproduce RQ1 & RQ2: the Effectiveness and Efficiency of Perses, Vulcan, C-Reduce, LPR and LPR+Vulcan.

Note that running reduction algorithms is time-consuming and LLM-dependent, 
we provide precomputed results in `./precomputed_results`for quick evaluation.

1. Run Perses

```bash
cd /tmp/LPR/
# run Perses on Benchmark-C (around 10 hours with 1 thread)
python3 scripts/run_perses.py --benchmark-suite /tmp/LPR/benchmark_suites/c/original/ --max-jobs 8
# "--max_jobs" enables running multiple benchmarks concurrently, with each benchmark assigned a single thread
# "--benchmark-suite" specifies the benchmark suite to evaluate on

# run on single benchmark: clang-23353
python3 scripts/run_perses.py --benchmark-suite /tmp/LPR/benchmark_suites/c/original/ --case clang-23353
```

The results will be stored in a folder with all flags concatenated, such as:

> ./results/scripts_run_perses_py_benchmark_suite_tmp_LPR_benchmark_suites_c_original_max_jobs_8/

To get summarized information, run summarize_xxx.py with the result folder, such as

```bash
python summarize_perses_or_vulcan.py ./results/scripts_run_perses_py_benchmark_suite_tmp_LPR_benchmark_suites_c_original_max_jobs_8/
```

2. Run Vulcan

```bash
# run Vulcan on Benchmark-C (around 40 hours with 1 thread)
cd /tmp/LPR/
python3 scripts/run_vulcan.py --benchmark-suite /tmp/LPR/benchmark_suites/c/original/ --max-jobs 8

# run on single benchmark: clang-23353
python3 scripts/run_vulcan.py --benchmark-suite /tmp/LPR/benchmark_suites/c/original/ --case clang-23353
```

To get summarized information

```bash
python summarize_perses_or_vulcan.py ./results/scripts_run_vulcan_py_benchmark_suite_tmp_LPR_benchmark_suites_c_original_max_jobs_8/
```

3. Run C-Reduce

```bash
# run C-Reduce on Benchmark-C (around 20 hours with 1 thread)
cd /tmp/LPR/
python3 scripts/run_creduce.py --benchmark-suite /tmp/LPR/benchmark_suites/c/original/ --max-jobs 8

# run on single benchmark: clang-23353
python3 scripts/run_creduce.py --benchmark-suite /tmp/LPR/benchmark_suites/c/original/ --case clang-23353
```

To get summarized information

```bash
python summarize_creduce.py ./results/scripts_run_creduce_py_benchmark_suite_tmp_LPR_benchmark_suites_c_original_max_jobs_8/
```

4. Run LPR

If you want to rerun LPR, there are two options.

##### Option1: Invoke OpenAI API: gpt-3.5-turbo-0125

Before running LPR, you need to add an OPENAI_API_KEY to the environment variable.
The OpenAI API is a paid service. 
On the gpt-3.5-turbo-0125 model, running an average benchmark costs less than $0.50.

```bash
export OPENAI_API_KEY=sk-xxxxxxx
```

```bash
cd /tmp/LPR/
# run LPR on Benchmark-C (around 40 hours with 1 thread)
python scripts/run_lpr.py --benchmark-suite /tmp/LPR/benchmark_suites/c/perses_rename --llm-version gpt-3.5-turbo-0125 --id 0
# In case the invocation of LLMs timeouts and terminates the whole process, we can wrap the command line with ./scripts/keep_running.sh, which continues to run the given command until it exits with 0.
./scripts/keep_running.sh "python scripts/run_lpr.py --benchmark-suite /tmp/LPR/benchmark_suites/c/perses_rename --llm-version gpt-3.5-turbo-0125 --id 0"
# flag "--id" helps to distinguish the id of runs for data storage. In the next run, if all other flags are identical, use "--id 1" to prevent the dulicated result folder.
# flag "--llm-version" specify the version OpenAI API or your local LLMs

# run on single benchmark: clang-23353
python scripts/run_lpr.py --benchmark-suite /tmp/LPR/benchmark_suites/c/perses_rename --llm-version gpt-3.5-turbo-0125 --case clang-23353
```

To get summarized information

```bash
python ./scripts/summarize_lpr.py results/scripts_run_lpr_py_benchmark_suite_tmp_LPR_benchmark_suites_c_perses_rename_llm_version_gpt_3_5_turbo_0125_id_0/
```

##### Option2: Deploy CodeLlama: CodeLlama-13b-Instruct-hf

Before running LPR, we need to deploy CodeLlama.
First, [download](https://huggingface.co/codellama/CodeLlama-13b-Instruct-hf) `CodeLlame-13b-Instruct-hf` 
(7b, 34b and 70b are also fine) to `/tmp/llms`.

Next, run the following commands to start the LLM outside the container.
```bash
# outside the container
cd /tmp/llms
python -m vllm.entrypoints.openai.api_server --model CodeLlama-13b-Instruct-hf
```
Then, run LPR in the container.
```bash
cd /tmp/LPR/
# run LPR on Benchmark-C (around 40 hours with 1 thread)
python scripts/run_lpr.py --benchmark-suite /tmp/LPR/benchmark_suites/c/perses_rename --llm-version CodeLlama-13b-Instruct-hf --id 0

# run on single benchmark: clang-23353
python scripts/run_lpr.py --benchmark-suite /tmp/LPR/benchmark_suites/c/perses_rename --llm-version gpt-3.5-turbo-0125 --case clang-23353
```

To get summarized information

```bash
python ./scripts/summarize_lpr.py results/scripts_run_lpr_py_benchmark_suite_tmp_LPR_benchmark_suites_c_perses_rename_llm_version_gpt_3_5_turbo_0125_id_0/
```

5. Run LPR + Vulcan

```bash
# Just run Vulcan on precomputed LPR's results
cd /tmp/LPR/
# run LPR+Vulcan on Benchmark-C (around 10 hours with 1 thread)
python3 scripts/run_vulcan.py --benchmark-suite /tmp/LPR/benchmark_suites/c/lpr_0/ --max-jobs 8

# run on single benchmark: clang-23353
python3 scripts/run_vulcan.py --benchmark-suite /tmp/LPR/benchmark_suites/c/lpr_0/ --case clang-23353
```

To get summarized information

```bash
python ./script/summarize_perses_or_vulcan.py results/scripts_run_vulcan_py_benchmark_suite_tmp_LPR_benchmark_suites_c_lpr_0_max_jobs_8/
```


### Reproduce RQ3: Effectiveness of Each Transformation.

To reproduce the size change analysis displayed in Figure 4, Figure 5 and Figure 6 in the paper, please run:

```bash
# This script may take 2-3 minutes
./scripts/analyze_and_draw.sh
```
This script collects and analyzes data in the folder `./precomputed_results/c/multi_level/`,
which consists of logs and intermediate results from LPR in 5 runs under the default setting. 
While these results are not exactly the same as those used in the paper, the differences are minimal. 
This is due to the fact that these results are from reruns, as the original results were unfortunately misplaced. 
Nevertheless, this also demonstrates the robustness of LPR despite of the nondeterministic nature of LLMs, 
as the rerun results closely align with the original outcomes.

After the execution of the above command, pdf files is saved under 
`./precomputed_results/c/multi_level/`, you can compare such files with Figures in the paper.
- Figure 4: `size_changes_boxplot_*.pdf`
- Figure 5: `size_changes_piechart.pdf`
- Figure 6: `size_changes_barchart.pdf`

### Other Experiments and Commands

To specify the temperature, use flag "--temperature", for example:

```bash
python scripts/run_lpr.py --benchmark-suite /tmp/LPR/benchmark_suites/c/perses_rename --temperature 0.5 --id 0

# run on single benchmark: clang-23353
python scripts/run_lpr.py --benchmark-suite /tmp/LPR/benchmark_suites/c/perses_rename --temperature 0.5 --case clang-23353
```

To disable multi-level prompt, use flag "--disable-multi-level", for example:

```bash
python scripts/run_lpr.py --benchmark-suite /tmp/LPR/benchmark_suites/c/perses_rename --disable-multi-level --id 0

# run on single benchmark: clang-23353
python scripts/run_lpr.py --benchmark-suite /tmp/LPR/benchmark_suites/c/perses_rename --disable-multi-level --case clang-23353
```
To count the token number of a program, use `token_counter_deploy.jar`,

```bash
java -jar /tmp/LPR/tools/token_counter_deploy.jar small.c
```