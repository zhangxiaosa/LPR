
#include <stdint.h>

typedef long d __attribute__((__vector_size__(sizeof(long))));

void fn1();
d fn2();

int main() {
    d value = fn2();
    // use the value of type d as needed in the program
    return 0;
}

void fn1() {
    // function body
}

d fn2() {
    return (d){fn1};
}
