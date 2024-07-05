
#include <stdint.h>

typedef long d __attribute__((__vector_size__(sizeof(long))));

void fn1() {}

d fn2() {
    long x1, x2, x3, x4;
    x1 = fn1();
    x2 = fn1();
    x3 = fn1();
    x4 = fn1();
    return (d){x1, x2, x3, x4};
}

int main() {
    d result = fn2();
    return 0;
}
