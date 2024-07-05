
#include <stdio.h>

typedef long a; // a is a typedef for long

a fn1() {
    // function that returns a long
    return 0;
}

a fn2() {
    a c = fn1(); // c is a long
    a f[1] = {c}; // f is an array of length 1 with a long element
    return f[0];
}

int main() {
    a result = fn2();
    printf("Result: %ld\n", result);
    return 0;
}
