
<SYS>

// Optimized program with function inlining

#include <stdio.h>

typedef long d __attribute__((__vector_size__(sizeof(long))));

// Inline function definition for fn1
inline d fn1() {
    d f = {0};
    return f;
}

d fn2() {
    d f = fn1();
    return f;
}

int main() {
    d result = fn2();
    printf("%ld\n", result);
    return 0;
}

</SYS>
