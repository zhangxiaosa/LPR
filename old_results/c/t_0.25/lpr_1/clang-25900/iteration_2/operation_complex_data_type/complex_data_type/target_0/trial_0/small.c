#include <stdio.h>

unsigned fn1(unsigned p2) {
    return p2;
}

struct m {
    signed n : 18;
    signed o : 1;
};

int r;
static signed s = -5L;
int t;

long fn4() {
    signed n = 1957;
    signed o = 0;

    o = fn1(5);
    signed ae = o;
    o = r;
    r = t % (~s / ae);
    o;
}

int main() {
    fn4();
}