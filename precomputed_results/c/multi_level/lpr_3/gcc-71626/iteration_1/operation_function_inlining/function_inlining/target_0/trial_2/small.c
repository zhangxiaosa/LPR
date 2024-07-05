#include <stddef.h>

typedef long d __attribute__((__vector_size__(sizeof(long))));

d fn2() {
    long c;
    d f;
    c = (long)&fn1;  // Inlined function address
    f = (d){c};     // Initializing the vector
    return f;
}

int main() {
    return 0;
}
