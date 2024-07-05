
#include <stdint.h>

typedef long d __attribute__((__vector_size__(sizeof(long))));

void fn1() {}

d fn2() {
    long result;
    result = fn1();
    return (d){result};
}

int main() {
    d result;
    result = fn2();
    return 0;
}
