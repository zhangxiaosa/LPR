
#include <stdio.h>

typedef long d __attribute__((__vector_size__(sizeof(long))));

fn1(void) {}

d fn2(void) {
    return (d){fn1};
}

int main(void) {
    d x = fn2();
    printf("x = %d\n", x);
    return 0;
}
