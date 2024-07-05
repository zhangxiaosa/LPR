#include <stdio.h>

char fn1(char p1, char p2) {
    return p1 * p2;
}

struct g {
    int h;
};

int i;
struct g j;

int *fn2(unsigned p1, int *p2, unsigned p3) {
    extern struct g j;
    for (p3 = 6; p3 != -7; p3--)
        j.h ^= p3 * i && 1L;
    return p2;
}

int main() {
    unsigned p1 = 0;
    int *p2 = NULL;
    unsigned p3 = 0;
    p2 = fn2(p1, p2, p3);
    return 0;
}