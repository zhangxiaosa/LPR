#include <stdio.h>

int fn2(int p1, int p2) { 
    return p1 && p2 ? p1 : p1 % p2;
}

unsigned w = 0xDC6F3D13L;
long long ag3;

int main() {
    long long ak = 0;
    short ah;
    
    for (ah = 0; ah <= 3; ah += 1) {
        unsigned assigned_value = ~((fn2(0, 1L) != 0) + ak) && 0x57L;
        
        if (w != 0) {
            ag3 = assigned_value;
        }
    }
    
    printf("checksum = %llX\n", ag3);
    return 0;
}