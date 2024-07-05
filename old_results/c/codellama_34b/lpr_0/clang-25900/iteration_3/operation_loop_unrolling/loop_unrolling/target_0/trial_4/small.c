
#include <stdint.h>

int32_t g(int32_t p1, int32_t p2) {
    return p2;
}

struct m {
    int32_t n : 18;
    int32_t o : 1;
};

int32_t r;
int32_t t;

int main() {
    struct m ad = {1957};
    int32_t ae = ad.o;
    for (int32_t i = 0; i < 17; i++) {
        ad.o = g(5, 5);
        ae = ad.o;
        ad.o = 5;
        r = t % (17 / ae);
        ad.o;
    }
    return 0;
}
