#include <stdio.h>

char fn1(char p1, char p2) {
    return p1 * p2;
}

int i;
unsigned j_h;

int main() {
    char p3;
    j_h ^= fn1(6, i) && 1L;
    j_h ^= fn1(5, i) && 1L;
    j_h ^= fn1(4, i) && 1L;
    j_h ^= fn1(3, i) && 1L;
    j_h ^= fn1(2, i) && 1L;
    j_h ^= fn1(1, i) && 1L;
    j_h ^= fn1(0, i) && 1L;
    j_h ^= fn1(-1, i) && 1L;
    j_h ^= fn1(-2, i) && 1L;
    j_h ^= fn1(-3, i) && 1L;
    j_h ^= fn1(-4, i) && 1L;
    j_h ^= fn1(-5, i) && 1L;
    j_h ^= fn1(-6, i) && 1L;
    return 0;
}