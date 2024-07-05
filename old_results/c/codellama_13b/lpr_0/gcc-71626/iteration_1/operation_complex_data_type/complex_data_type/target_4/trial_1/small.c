
#include <stdio.h>

typedef long int d;

d fn1() {
    return 0;
}

d fn2() {
    return (d){fn1};
}

int main() {
    d a = fn1();
    d b = fn2();
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    return 0;
}
