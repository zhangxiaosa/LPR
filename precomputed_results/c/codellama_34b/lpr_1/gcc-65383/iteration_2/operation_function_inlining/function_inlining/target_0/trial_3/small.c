
#include <stdio.h>

int g;
int h0 = 0x92A1D2CD;
static int i = 0x06D7;

// Function fn2() is optimized out via function inlining
int main() {
    // Loop is optimized out
    g = 0xC3;
}
