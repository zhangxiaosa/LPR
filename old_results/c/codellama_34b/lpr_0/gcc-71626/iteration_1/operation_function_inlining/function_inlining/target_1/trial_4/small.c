
#include <stdint.h>

typedef long d __attribute__((__vector_size__(sizeof(long))));

// Inline the function fn1() into fn2()
inline d fn2() {
    return (d){fn1};
}

int main() {
    return 0;
}
