
#include <stdint.h>

typedef union {
    long x;
    long y;
} d;

d fn2() {
    d f = {fn1};
    return f;
}

int main() {
    d result = fn2();
    printf("x: %ld, y: %ld\n", result.x, result.y);
    return 0;
}
