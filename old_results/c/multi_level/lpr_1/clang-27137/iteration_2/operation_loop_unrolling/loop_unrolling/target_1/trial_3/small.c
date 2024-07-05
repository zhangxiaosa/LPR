#include <stdio.h>

int main() {
    short r = 0;
    r -= 1;  // Unrolled iteration 1
    r -= 1;  // Unrolled iteration 2
    r -= 1;  // Unrolled iteration 3
    r -= 1;  // Unrolled iteration 4
    r -= 1;  // Unrolled iteration 5
    r -= 1;  // Unrolled iteration 6
    r -= 1;  // Unrolled iteration 7
    r -= 1;  // Unrolled iteration 8
    r -= 1;  // Unrolled iteration 9
    r -= 1;  // Unrolled iteration 10
    
    printf("checksum = %X\n", r);
    return 0;
}