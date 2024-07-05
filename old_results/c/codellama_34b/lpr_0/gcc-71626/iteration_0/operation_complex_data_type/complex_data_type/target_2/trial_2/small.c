
#include <stdint.h>

typedef long a;

fn1() {}

typedef long d __attribute__((__vector_size__(sizeof(long))));

d fn2() { return (d){fn1}; }

int main() {
    a fn1_result;
    d fn2_result;

    fn1_result = fn1();
    fn2_result = fn2();

    return 0;
}
