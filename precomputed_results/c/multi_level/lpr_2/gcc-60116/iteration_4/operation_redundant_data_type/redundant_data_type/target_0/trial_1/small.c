#include <stdio.h>

char fn2(char p1, char p2) {
    return p1 && p2 ? p1 : p1 % p2;
}

char q;
int w = 0xDC6F3D13L;
short ah;
long ak;
unsigned ao;
unsigned ap;

int main() {
    ak = 0;
    
    for (ah = 0; ah <= 3; ah += 1) {
        int assigned_value = ~((fn2(ap, 1) != 0) + ak) && 0x57;
        
        if (w) {
            q = 0x41AEA787L;
            ag3 = assigned_value;
        } else {
            ao = assigned_value;
        }
    }
    
    printf("checksum = %lX\n", ag3);
    
    return 0;
}