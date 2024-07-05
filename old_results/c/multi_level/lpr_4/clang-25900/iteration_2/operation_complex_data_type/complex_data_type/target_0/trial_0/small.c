#include <stdio.h>

int fn1(unsigned p1, int p2) {
    return p2;
}

struct m {
    int n : 18;
    int o : 1;
};

int main() {
    unsigned p1; // no initial value specified
    int p2; // no initial value specified
    struct m p2 = {1957};
    int r = 0;
    static int s = -5L;
    int t = 0;
    int u = 0;
    int ae = 0;

    p2.o = fn1(5, 5);
    ae = p2.o;
    p2.o = u;
    r = t % (~s / ae);
    p2.o;

    return 0;
}