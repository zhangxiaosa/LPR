
#include <stdio.h>

int fn1() {
    return 1;
}

typedef long d;

d fn2() {
    long c = fn1();
    d f = {c};
    return f;
}

int main() {
    long result = fn2();
    printf("Result: %ld\n", result);
    return 0;
}
