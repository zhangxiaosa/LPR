
#include <iostream>

int main() {
    int n = 18;
    int o = 1;
    int r;
    int s_sign = -5;
    int s_unsigned = 5;
    int u;

    struct m {
        int n;
        int o;
    };
    m ad = {1957, s_unsigned};
    int ae = ad.o;
    ad.o = u;
    r = ad.o % (~s_sign / ae);

    return 0;
}
