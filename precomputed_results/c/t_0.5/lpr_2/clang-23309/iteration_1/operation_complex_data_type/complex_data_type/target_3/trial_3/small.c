#include <stdio.h>

unsigned v = 0;

void fn13() {
    short w = 3;
    short ac = 1;
    short an = 250;
    short ao = 0xBCD1;
    
    if (an == 250) {
        ac || (an = w);
        
        if (ao - 1 - ac & 1)
            v = 1;
    }
}

int main() {
    fn13();
    printf("checksum = %X\n", v);
    return 0;
}