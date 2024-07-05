
#include <stdint.h>

// Decomposition of the `d` type
typedef long d__element;

// Decomposition of the `fn1` function
void fn1_impl() {}

// Decomposition of the `fn2` function
d fn2_impl() {
    return (d){fn1_impl};
}

int main() {
    // Call the `fn2` function and store the result in a variable
    d result = fn2_impl();

    // Return the result
    return result;
}
