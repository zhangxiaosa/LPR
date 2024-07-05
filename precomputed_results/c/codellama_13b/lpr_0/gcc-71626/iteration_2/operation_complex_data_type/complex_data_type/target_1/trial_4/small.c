
#include <stdio.h>

typedef long d __attribute__((__vector_size__(sizeof(long)));

d fn1() {
    return (d){0};
}

d fn2() {
    return (d){fn1};
}

int main() {
    d x = fn2();
    printf("%ld\n", x);
    return 0;
}
