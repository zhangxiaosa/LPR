
#include <stdio.h>

typedef long a;

a fn1() {
    return 0;
}

typedef a d __attribute__((vector_size(sizeof(a))));

d fn2() {
    return {fn1()};
}

int main() {
    return 0;
}
