#include <stdio.h>

char fn1(char p1, char p2) {
    return p1 * p2;
}

struct g {
    signed int h;
};

int main() {
    char p3;
    int i;
    struct g j;

    for (p3 = 6; p3 != -7; p3--) {
        j.h ^= fn1(p3, i) && 1L;
    }

    return 0;
}