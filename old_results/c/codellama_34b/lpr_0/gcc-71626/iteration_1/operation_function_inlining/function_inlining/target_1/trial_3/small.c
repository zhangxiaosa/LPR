
#include <stdlib.h>
#include <stdint.h>

typedef long d __attribute__((__vector_size__(sizeof(long))));

d fn2() {
    d result;
    result[0] = 1;
    result[1] = 2;
    result[2] = 3;
    result[3] = 4;
    return result;
}

int main() {
    d res = fn2();
    return 0;
}
