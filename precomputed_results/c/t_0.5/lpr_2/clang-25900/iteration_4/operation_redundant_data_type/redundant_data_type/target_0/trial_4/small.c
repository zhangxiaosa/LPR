#include <stdio.h>

unsigned fn1(signed int p2) {
    return (unsigned int)p2;
}

unsigned int r;
static signed int s = -5L;

int main() {
    signed int ad_n = 1957;
    signed int ad_o = fn1(5);
    signed int ae;
    
    ae = ad_o;
    r = 4 % (~s / ae);
    
    // Remove the reference to ad.o
    // ad.o;

    return 0;
}