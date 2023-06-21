#! /bin/bash
my_case=$1
cp "../../benchmark/fine_tune_benchmark/${my_case}/small.c" "${my_case}/small.c"
cp "../../benchmark/fine_tune_benchmark/${my_case}/r.sh" "${my_case}/r.sh"
cp "../../benchmark/fine_tune_benchmark/${my_case}/creduce-result/small.c" "${my_case}/small.c.creduce"
exit 0

