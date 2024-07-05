#include <stdio.h>

char fn1(char p1, char p2) {
    return p1 * p2;
}

int i;
int h;

void *fn2(unsigned p1, int *p2, char p3) {
    h ^= fn1(p3, i) && 1;
    h ^= fn1(p3-1, i) && 1;
    h ^= fn1(p3-2, i) && 1;
    h ^= fn1(p3-3, i) && 1;
    return p2;
}

int main() {
    h ^= fn1(6, i) && 1;
    h ^= fn1(5, i) && 1;
    h ^= fn1(4, i) && 1;
    h ^= fn1(3, i) && 1;
    return 0;
}