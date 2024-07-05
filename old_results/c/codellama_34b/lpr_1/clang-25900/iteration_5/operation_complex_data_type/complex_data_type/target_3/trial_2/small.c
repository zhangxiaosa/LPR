
#include <iostream>

int main() {
    int n = 1957;
    int o = 1;
    int r;
    int s_sign = -5;
    int s_unsigned = 5;
    int u;

    struct m {
        int n : 18;
        int o : 1;
    };

    struct m ad;
    ad.n = n;
    ad.o = o;

    ad.o = s_unsigned;
    int ae = ad.o;
    ad.o = u;
    r = ad.o % (~s_sign / ae);

    return 0;
}
