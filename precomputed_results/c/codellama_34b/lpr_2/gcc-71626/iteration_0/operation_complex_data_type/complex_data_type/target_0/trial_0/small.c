
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

typedef long d __attribute__((__vector_size__(sizeof(long))));

d fn2() {
    long c = fn1;
    d f = {c};
    return f;
}

int main() {
    long c = 0;
    d f = fn2();
    printf("f = %ld\n", f);
    return 0;
}
