#include <stdio.h>

int fn2(int unused) {
    return unused;
}

int fn4(int p1, int unused) {
    return p1 % unused;
}

unsigned s;
unsigned u;
int v;
static unsigned w = 254;
int ad[][5][7] = {{8}, {8}, {{8}, 0x98}};
int af;

int main() {
    int ai[2];
    unsigned j;
    
    for (j = 0; j < 2; j++)
        ai[j] = 8;
      
    w = 1;
    
    for (; j < 25; j += 20) {
    }
    
    for (af = 6; af >= 0; af -= 1)
        ai[0] ^= ad[w + 1][w][af];
      
    s = ad[2][1][0];
    
    printf("checksum = %X\n", s);
  
    return 0;
}