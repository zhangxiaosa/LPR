#include <stdio.h>

int ad[][5][7] = {{8}, {8}, {{8}, 0x98}};

int fn2(int p1, int p2) {
    return p1;
}

int fn4(int p1, int p2) {
    return p1 % p2;
}

int main() {
    unsigned j;
    unsigned s;
    unsigned u = 0;  // Initialize u to 0

    int ai[2] = {8, 8};  // Directly assign the values 8 to ai[0] and ai[1]

    s = ad[2][1][0];

    ai[0] = fn4(fn2(1, u--), 4294967295U);  // Assign the result to ai[0]
    printf("checksum = %X\n", s);
  
    return 0;
}
