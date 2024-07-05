#include <stdio.h>

int fn1(int p2) {
    return p2;
}

struct m {
    signed int n;
    signed int o;
};

int r;
static signed int s = -5L;

long fn4() {
    struct m p2;
    p2.n = 1957;

    int p2_o = fn1(5);
    signed int ae = p2_o;

    p2.o = r;
    r = r % (~s / ae);

    return p2.o;
}

int main() {
    fn4();
}