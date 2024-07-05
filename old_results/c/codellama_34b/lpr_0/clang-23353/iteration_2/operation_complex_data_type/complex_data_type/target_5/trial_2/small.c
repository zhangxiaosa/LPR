
#include <stdio.h>

int main() {
    int i, j;
    char p1, p2, p3;

    p1 = 6;
    p2 = -7;
    p3 = 0;

    while (p3 != -7) {
        p3--;
        j ^= fn1(p3, i) && 1L;
    }

    return 0;
}

char fn1(char p1, char p2) {
    return p1 * p2;
}

int fn2(int *p2, char p3) {
    for (p3 = 6; p3 != -7; p3--) {
        j ^= fn1(p3, i) && 1L;
    }
    return p2;
}
