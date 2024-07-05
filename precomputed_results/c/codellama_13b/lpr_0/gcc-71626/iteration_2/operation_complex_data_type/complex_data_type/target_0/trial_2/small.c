
#include <stdio.h>

typedef long d __attribute__((__vector_size__(sizeof(long))));

long fn1() {
    long x1;
    x1 = 10;
    return x1;
}

long fn2() {
    long x2;
    x2 = fn1();
    return x2;
}

int main() {
    long x3;
    x3 = fn2();
    printf("%ld\n", x3);
    return 0;
}
