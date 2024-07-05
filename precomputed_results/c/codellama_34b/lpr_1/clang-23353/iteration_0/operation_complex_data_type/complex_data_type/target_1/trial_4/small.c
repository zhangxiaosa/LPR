
#include <stdio.h>

int fn1(int p1, int p2) {
    return p1 * p2;
}

struct g {
    int h;
};

int i;
struct g j;

int *fn2(unsigned p1, int *p2, char p3) {
    int result;
    for (p3 = 6; p3 != -7; p3--) {
        result = fn1(p3, i);
        j.h ^= result && 1L;
    }
    return p2;
}

int main() {
    int x = 5;
    int y = 10;
    int result = fn2(x, &y, 6);
    printf("Result: %d\n", result);
    return 0;
}
