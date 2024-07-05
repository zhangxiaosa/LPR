#include <stdio.h>

int fn1(int p1, int p2) {
    return p1 * p2;
}

int main() {
    int p3;
    int i;
    int j_h;

    for (p3 = 6; p3 >= -7; p3 -= 1) {
        j_h ^= fn1(p3, i) && 1;
    }

    return 0;
}