
The variable `p1` is a function parameter in `fn1` but is not used in the function body. Therefore, we can optimize it out by constant propagation or copy propagation.

To optimize it out by constant propagation, we can replace all occurrences of `p1` with the value of the constant that is passed as an argument to `fn1`. For example, if `fn1` is called with the argument `5`, we can replace all occurrences of `p1` with `5`.

To optimize it out by copy propagation, we can replace all occurrences of `p1` with the value of the variable that is passed as an argument to `fn1`. For example, if `fn1` is called with the argument `i`, we can replace all occurrences of `p1` with `i`.

Here is the optimized program:
