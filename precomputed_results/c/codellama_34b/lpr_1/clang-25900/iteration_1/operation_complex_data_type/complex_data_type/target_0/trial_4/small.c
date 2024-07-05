
#include <iostream>

typedef unsigned int uint;

uint fn1(uint p1, int p2) {
    return p2;
}

struct m {
    int n : 18;
    int o : 1;
};

int r;
static int s = -5;
int u;

int fn4(int ae, int af) {
    int r = af % (~s / ae);
    return r;
}

int main() {
    int ae = 0;
    int af = 5;
    int r = fn4(ae, af);
    std::cout << "r = " << r << std::endl;
    return 0;
}
