
#include <stdio.h>

typedef long d;

d fn1() {
    return 1;
}

d* fn2() {
    return &fn1;
}

int main() {
    d var1 = fn1();
    d* var2 = fn2();

    printf("var1: %ld\n", var1);
    printf("var2: %ld\n", *var2);

    return 0;
}
