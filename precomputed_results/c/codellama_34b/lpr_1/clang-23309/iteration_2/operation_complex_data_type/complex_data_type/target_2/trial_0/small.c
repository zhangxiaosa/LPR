
#include <stdio.h>

// Decomposition of variables
short p1, p2;
unsigned short ac;
unsigned char w;
unsigned v;

// Function prototypes
short fn2(short, short);
short fn3(short, short);
unsigned char fn10(short, short);
short fn13();

int main() {
    // Initialize variables
    p1 = 0xBCD1;
    p2 = 1;
    ac = 1;
    w = 3;
    v = 0;

    // Call function 10
    fn10(p1, p2);

    // Print the result
    printf("checksum = %X\n", v);

    return 0;
}

// Function implementations
short fn2(short p1, short p2) {
    return p1 - p2;
}

short fn3(short p1, short p2) {
    return p1 - p2;
}

unsigned char fn10(short p1, short p2) {
    short an;
    for (w = 3; w; w--) {
        an = 250;
        p2 = ac || (an = w) == 0x294A85636008822D;
        if (fn2(fn3(p1, 1 - an), p2) & 1)
            v = 1;
    }
    return 3;
}

short fn13() {
    fn10(0, 0);
    return 1;
}
