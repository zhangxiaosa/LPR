
#include <stdio.h>
#include <stdint.h>

typedef long a;

void fn1() {}

typedef a d __attribute__((__vector_size__(sizeof(a))));

d fn2() {
    for (int i = 0; i < sizeof(a) / 2; i++) {
        fn1();
        fn1();
    }
    return (d){fn1};
}

int main() {
    d result = fn2();
    printf("result: %ld\n", result);
    return 0;
}
