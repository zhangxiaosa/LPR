
#include <stdio.h>

typedef long d __attribute__((__vector_size__(sizeof(long))));

d fn2() {
    return (d){fn1};
}

int main() {
    d x = fn2();
    printf("%ld\n", x[0]);
    return 0;
}
