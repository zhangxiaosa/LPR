#! /bin/bash

python scripts/analyze_lpr_size_change.py ./old_results/c/multi_level/lpr_0/
python scripts/analyze_lpr_size_change.py ./old_results/c/multi_level/lpr_1/
python scripts/analyze_lpr_size_change.py ./old_results/c/multi_level/lpr_2/
python scripts/analyze_lpr_size_change.py ./old_results/c/multi_level/lpr_3/
python scripts/analyze_lpr_size_change.py ./old_results/c/multi_level/lpr_4/

python ./scripts/collect_lpr_size_change_data.py  ./old_results/c/multi_level/lpr_0/
python ./scripts/collect_lpr_size_change_data.py  ./old_results/c/multi_level/lpr_1/
python ./scripts/collect_lpr_size_change_data.py  ./old_results/c/multi_level/lpr_2/
python ./scripts/collect_lpr_size_change_data.py  ./old_results/c/multi_level/lpr_3/
python ./scripts/collect_lpr_size_change_data.py  ./old_results/c/multi_level/lpr_4/

python ./scripts/merge_lpr_size_change_data.py old_results/c/multi_level/

python ./scripts/draw_size_changes_boxplot.py ./old_results/c/multi_level/merged_size_changes.json
python ./scripts/draw_size_changes_barchart.py ./old_results/c/multi_level/merged_size_changes.json
python ./scripts/draw_size_changes_piechart.py ./old_results/c/multi_level/merged_size_changes.json