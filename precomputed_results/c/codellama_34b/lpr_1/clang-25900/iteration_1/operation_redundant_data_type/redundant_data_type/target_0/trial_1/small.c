
#include <iostream>

using namespace std;

typedef unsigned int uint;

uint fn1(uint p1, int p2) {
    return p2;
}

struct m {
    signed n : 18;
    signed o : 1;
};

int r;
static signed s = -5L;
int u;

uint fn4() {
    struct m ad = {1957};
    ad.o = fn1(0, 5);
    signed ae;
    int af = u;
    ae = ad.o;
    ad.o = u;
    r = af % (~s / ae);
    ad.o;
}

int main() {
    fn4();
    return 0;
}
