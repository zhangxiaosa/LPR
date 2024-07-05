#include <stdio.h>

char fn2(char p1, int p2) {
    return p1;
}

unsigned p;
unsigned u;
unsigned v_3;

int main() {
    int d = 2L;

    // First iteration
    v_3 = d;
    d = fn2(v_3, 3);
    d = d + 0x9EE7F9D1C772505B;

    // Second iteration
    v_3 = d;
    d = fn2(v_3, 3);
    d = d + 0x9EE7F9D1C772505B;

    // Third iteration
    v_3 = d;
    d = fn2(v_3, 3);
    d = d + 0x9EE7F9D1C772505B;

    // Fourth iteration
    v_3 = d;
    d = fn2(v_3, 3);
    d = d + 0x9EE7F9D1C772505B;

    // Fifth iteration
    v_3 = d;
    d = fn2(v_3, 3);
    d = d + 0x9EE7F9D1C772505B;

    // Assign the final value of v_3 to p
    p = v_3;

    // Print the value of p
    printf("checksum = %X\n", p);

    return 0;
}