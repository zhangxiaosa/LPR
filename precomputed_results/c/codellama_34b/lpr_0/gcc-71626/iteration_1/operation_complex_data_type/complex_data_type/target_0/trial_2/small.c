
#include <stdint.h>

typedef long d __attribute__((__vector_size__(sizeof(long))));

void fn1() {}

d fn2() { return (d){fn1}; }

int main() {
    d res = fn2();

    // Decompose the d type into primary data types
    long x = res[0];
    long y = res[1];
    long z = res[2];

    return 0;
}
