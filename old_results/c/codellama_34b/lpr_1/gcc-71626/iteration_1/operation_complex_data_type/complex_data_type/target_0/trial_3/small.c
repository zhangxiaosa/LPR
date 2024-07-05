
<SYS>

#include <stdint.h>

#define VECTOR_SIZE 8

typedef long d __attribute__((__vector_size__(sizeof(long))));

d fn2() {
    long c = fn1();
    d f = {c};
    return f;
}

int main() {
    d result = fn2();
    return 0;
}

</SYS>
