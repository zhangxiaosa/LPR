#include <stdio.h>

int fn1(int p2) {
    return p2;
}

struct m {
    int n;
    int o;
};

int r;
static signed s = -5L;

long fn4() {
    struct m p2;
    p2.n = 1957;
    p2.o = fn1(5);
    int ae;
    ae = p2.o;
    p2.o = r;
    r = r % (~s / ae);
    return p2.o;
}

int main() {
    fn4();
}