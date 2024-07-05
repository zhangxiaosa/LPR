
#include <stdint.h>

typedef long d __attribute__((__vector_size__(sizeof(long))));

d fn2() {
    return (d){fn1};
}

int main() {
    return 0;
}

fn1() {
    // Function body goes here
}

<SYS>

The optimized program is:
