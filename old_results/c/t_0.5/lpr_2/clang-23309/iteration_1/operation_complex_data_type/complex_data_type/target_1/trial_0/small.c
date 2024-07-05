#include <stdio.h>

char fn4(unsigned p1, unsigned p2) {
    return p1;
}

unsigned fn6(unsigned p1, unsigned p2) {
    return p1 - p2;
}

unsigned v;
short w;
short ac = 1;

short fn13() {
    short an;
    unsigned fn6_result;
    unsigned fn4_result;
    unsigned ao;
    
    for (w = 3; w; w -= 1) {
        if (an = 250) {
            ac || (an = w);
            ao = 0xBCD1;
            fn6_result = fn6(1, an);
            fn4_result = fn4(fn6_result, 0xEC);
            
            if ((ao - fn4_result - ac) & 1)
                v = 1;
        }
    }
    
    return 3;
}

int main() {
    fn13();
    printf("checksum = %X\n", v);
    return 0;
}