
#include <stdio.h>

typedef long d __attribute__((__vector_size__(sizeof(long))));

int main() {
    d f;
    long c = fn1();
    f = {c};
    return 0;
}

long fn1() {
    return 0;
}

d fn2() {
    long c = fn1();
    d f = {c};
    return f;
}
