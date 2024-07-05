
The program is already optimized, as the function `fn1` is only called once and the variable `l` is not used anywhere else.

However, if we want to further optimize the program, we can consider the following changes:

1. Remove the unused variable `l`.
2. Inline the function `fn1` directly into the function `fn2`. This will eliminate the overhead of a function call.

Here's the optimized program:
