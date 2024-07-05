
<SYS>

#include <stdio.h>

#define A_VALUE 6
#define B_VALUE -7

typedef char a;
typedef unsigned c;

a fn1(a p1, a p2) {
    return p1 * p2;
}

struct g {
    signed h;
};

int i;
struct g j;

int *fn2(c p1, int *p2, a p3) {
    for (p3 = A_VALUE; p3 != B_VALUE; p3--) {
        j.h ^= fn1(p3, i) && 1L;
    }
    return p2;
}

int main() {
    return 0;
}

