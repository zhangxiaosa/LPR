
#include <stdint.h>

typedef long d __attribute__((__vector_size__(sizeof(long))));

union {
    long longs[sizeof(long) / sizeof(long)];
    d vector;
} data;

void fn1() {}

d fn2() { return (d){fn1}; }

int main() { return 0; }
