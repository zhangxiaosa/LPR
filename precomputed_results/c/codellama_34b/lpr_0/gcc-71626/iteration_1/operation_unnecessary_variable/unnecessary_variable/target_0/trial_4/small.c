
#include <stdio.h>
#include <stdint.h>

fn1() {
    return (d){fn1};
}

fn2() {
    return (d){fn2};
}

int main() {
    d result = fn1();
    printf("%ld\n", result);
    return 0;
}
