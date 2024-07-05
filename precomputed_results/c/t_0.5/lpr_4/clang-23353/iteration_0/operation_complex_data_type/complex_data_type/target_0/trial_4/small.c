#include <stdio.h>

char fn1(char p1, char p2) {
    return p1 * p2;
}

signed int h;
int i;

int main() {
    char p3;
    signed int j_h = h;

    for (p3 = 6; p3 >= -7; p3 -= 1) {
        j_h ^= fn1(p3, i) && 1L;
    }

    h = j_h;

    return 0;
}