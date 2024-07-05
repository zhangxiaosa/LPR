
#include <stdio.h>

typedef long a;

#define fn1() 1

typedef a d __attribute__((__vector_size__(sizeof(a))));

d fn2() {
    a c = fn1;
    d f = {c};
    return f;
}

int main() {
    d f = fn2();
    printf("%ld\n", f[0]);
    return 0;
}
