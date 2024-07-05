
#include <stdio.h>

typedef long a;
fn1() {}
typedef a d __attribute__((__vector_size__(sizeof(a))));
d fn2() { return (d){fn1}; }
main() {}

<SYS>

int main() {
    d fn2_unrolled();
    fn2_unrolled();
    return 0;
}

fn2_unrolled() {
    d fn2_unrolled_0();
    d fn2_unrolled_1();
    d fn2_unrolled_2();
    d fn2_unrolled_3();
    return fn2_unrolled_0() + fn2_unrolled_1() + fn2_unrolled_2() + fn2_unrolled_3();
}

fn2_unrolled_0() {
    return fn1();
}

fn2_unrolled_1() {
    return fn1();
}

fn2_unrolled_2() {
    return fn1();
}

fn2_unrolled_3() {
    return fn1();
}

</SYS>
