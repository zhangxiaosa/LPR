
#include <stdbool.h>

int fn1(char p1, char p2) {
    return p1 * p2;
}

struct g {
    int h;
};

int i;
struct g j;

int fn2(p3) {
    j.h ^= fn1(p3, i) && 1L;
    j.h ^= fn1(p3 + 1, i) && 1L;
    j.h ^= fn1(p3 + 2, i) && 1L;
    j.h ^= fn1(p3 + 3, i) && 1L;
    j.h ^= fn1(p3 + 4, i) && 1L;
    j.h ^= fn1(p3 + 5, i) && 1L;
    j.h ^= fn1(p3 + 6, i) && 1L;
    j.h ^= fn1(p3 + 7, i) && 1L;
    j.h ^= fn1(p3 + 8, i) && 1L;
    j.h ^= fn1(p3 + 9, i) && 1L;
    return 0;
}

int main() {
    return 0;
}

