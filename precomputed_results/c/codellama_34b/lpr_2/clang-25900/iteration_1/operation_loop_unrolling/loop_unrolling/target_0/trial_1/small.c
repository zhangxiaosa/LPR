
#include <stdio.h>

struct m {
    int n : 18;
    int o : 1;
};
int r;
static int s = -5L;
int u;

int fn4_inlined(p1) {
    struct m ad = {1957};
    ad.o = p1;
    int ae;
    int af = u;
    ae = ad.o;
    ad.o = u;
    r = af % (~s / ae);
    return ad.o;
}

int main() {
    int i, j;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            fn4_inlined(5);
        }
    }
}
