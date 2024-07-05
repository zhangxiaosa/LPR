#include <iostream>

unsigned fn1(unsigned p2) {
    return p2;
}

struct m {
    int n : 18;
    int o : 1;
};

int r;
unsigned t;

int main() {
    struct m ad = {1957};
    ad.o = 5; // Constant propagation
    int ae = ad.o; // Copy propagation
    ad.o = 0;
    r = t % (4 / ae);
}
