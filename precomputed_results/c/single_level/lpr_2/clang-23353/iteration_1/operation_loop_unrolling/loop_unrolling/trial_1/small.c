#include <stdio.h>

char fn1(char p1, char p2) {
    return p1 * p2;
}

int main() {
    char p3;
    unsigned temp;
    signed j_h;
    int i;

    p3 = 6;

    // Unrolled Loop Iteration 1 (p3 = 6)
    temp = fn1(p3, i) && 1L;
    j_h ^= temp;

    // Unrolled Loop Iteration 2 (p3 = 5)
    p3--;
    temp = fn1(p3, i) && 1L;
    j_h ^= temp;

    // Unrolled Loop Iteration 3 (p3 = 4)
    p3--;
    temp = fn1(p3, i) && 1L;
    j_h ^= temp;

    // Unrolled Loop Iteration 4 (p3 = 3)
    p3--;
    temp = fn1(p3, i) && 1L;
    j_h ^= temp;

    // Unrolled Loop Iteration 5 (p3 = 2)
    p3--;
    temp = fn1(p3, i) && 1L;
    j_h ^= temp;

    // Unrolled Loop Iteration 6 (p3 = 1)
    p3--;
    temp = fn1(p3, i) && 1L;
    j_h ^= temp;

    // Unrolled Loop Iteration 7 (p3 = 0)
    p3--;
    temp = fn1(p3, i) && 1L;
    j_h ^= temp;

    // Unrolled Loop Iteration 8 (p3 = -1)
    p3--;
    temp = fn1(p3, i) && 1L;
    j_h ^= temp;

    // Unrolled Loop Iteration 9 (p3 = -2)
    p3--;
    temp = fn1(p3, i) && 1L;
    j_h ^= temp;

    // Unrolled Loop Iteration 10 (p3 = -3)
    p3--;
    temp = fn1(p3, i) && 1L;
    j_h ^= temp;

    // Unrolled Loop Iteration 11 (p3 = -4)
    p3--;
    temp = fn1(p3, i) && 1L;
    j_h ^= temp;

    // Unrolled Loop Iteration 12 (p3 = -5)
    p3--;
    temp = fn1(p3, i) && 1L;
    j_h ^= temp;

    // Unrolled Loop Iteration 13 (p3 = -6)
    p3--;
    temp = fn1(p3, i) && 1L;
    j_h ^= temp;

    // Unrolled Loop Iteration 14 (p3 = -7)
    p3--;
    temp = fn1(p3, i) && 1L;
    j_h ^= temp;

    return 0;
}