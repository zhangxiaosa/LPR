#include <stdio.h>

char fn1(char p1, char p2) {
    return p1 * p2;
}

int i;

int *fn2(unsigned p1, int *p2, unsigned p3) {
    for (p3 = 6; p3 != -7; p3--) {
        // h ^= fn1(p3, i) && 1L;
        h ^= (i != 0) ? (p3 * i) && 1L : 0;
    }
    return p2;
}

int main() {
    int h = (i != 0) ? 0 : 0;
    return 0;
}