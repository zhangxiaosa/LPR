#include <iostream>

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
    struct m p2 = {1957};
    unsigned p2_n = p2.n;
    signed p2_o = p2.o;

    p2_o = fn1(5);
    signed ae = p2_o;

    p2_o = r;
    r = t % (~s / ae);

    return p2_o;
}

int main() {
    fn4();
}