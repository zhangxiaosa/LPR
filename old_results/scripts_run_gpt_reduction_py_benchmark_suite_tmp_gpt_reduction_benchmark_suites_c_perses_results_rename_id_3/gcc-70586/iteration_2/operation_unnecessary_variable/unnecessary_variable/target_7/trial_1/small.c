#include<stdio.h>

short p;
short q;
unsigned s = 0x03F238A4L;
unsigned t[7][1];

short fn2(short p1, unsigned p2) {
    return p1;
}

int fn3(int p1, int p2) {
    return p2 == 0 || p1 && p2 ? p1 : p1 % p2;
}

static short fn7(short p1) {
    int ac;
    ac = p1; // Constant propagation
    return p1;
}

int main() {
    // Empty main function (no useful code)
}