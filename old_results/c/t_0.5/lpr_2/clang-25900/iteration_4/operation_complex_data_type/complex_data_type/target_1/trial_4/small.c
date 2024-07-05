#include <stdio.h>

unsigned int fn1(unsigned int p2) {
    return p2;
}

signed int n;
signed int o;

unsigned int r;
static signed int s = -5L;

int main() {
    n = 1957;
    o = fn1(5);

    signed int ae;
    ae = o;

    r = 4 % (~s / ae);

    o;
}