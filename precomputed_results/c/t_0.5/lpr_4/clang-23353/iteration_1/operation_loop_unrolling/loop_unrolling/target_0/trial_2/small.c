#include <stdio.h>

char fn1(char p1, char p2) {
    return p1 * p2;
}

int i;
int j_h;

int main() {
    char p3;
    j_h = 0;

    // Unrolled loop
    p3 = 6;
    j_h ^= fn1(p3, i) && 1L;

    p3 = 5;
    j_h ^= fn1(p3, i) && 1L;

    p3 = 4;
    j_h ^= fn1(p3, i) && 1L;

    p3 = 3;
    j_h ^= fn1(p3, i) && 1L;

    p3 = 2;
    j_h ^= fn1(p3, i) && 1L;

    p3 = 1;
    j_h ^= fn1(p3, i) && 1L;

    p3 = 0;
    j_h ^= fn1(p3, i) && 1L;

    p3 = -1;
    j_h ^= fn1(p3, i) && 1L;

    p3 = -2;
    j_h ^= fn1(p3, i) && 1L;

    p3 = -3;
    j_h ^= fn1(p3, i) && 1L;

    p3 = -4;
    j_h ^= fn1(p3, i) && 1L;

    p3 = -5;
    j_h ^= fn1(p3, i) && 1L;

    p3 = -6;
    j_h ^= fn1(p3, i) && 1L;

    p3 = -7;
    j_h ^= fn1(p3, i) && 1L;

    return j_h;
}