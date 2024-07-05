
#include <stdio.h>

int main() {
    int r = -5;
    unsigned int t = 5;
    int u = 5;
    struct m {
        int n : 18;
        int o : 1;
    };
    struct m ad = {1957};
    ad.o = 5;
    int ae = t;
    ad.o = u;
    r = ae % (~r / ad.o);
    return ad.o;
}
