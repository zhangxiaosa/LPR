
#include <stdint.h>

typedef long d __attribute__((__vector_size__(sizeof(long))));

d fn1() {
    long c = 0;
    c += 1; // first iteration
    c += 1; // second iteration
    c += 1; // third iteration
    c += 1; // fourth iteration
    c += 1; // fifth iteration
    c += 1; // sixth iteration
    c += 1; // seventh iteration
    c += 1; // eighth iteration
    c += 1; // ninth iteration
    c += 1; // tenth iteration
    return (d)c;
}

int main() {
    d f = fn1();
    return 0;
}
