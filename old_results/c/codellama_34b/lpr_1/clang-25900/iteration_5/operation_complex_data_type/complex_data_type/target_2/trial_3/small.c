
#include <stdio.h>

struct m {
    int n;
    int o;
};

int r;
static int s_sign = -5;
static int s_unsigned = 5;
int u;

int main() {
    struct m ad = {1957};
    ad.o = s_unsigned;
    int ae = ad.o;
    ad.o = u;
    r = ad.o % (~s_sign / ae);
    return 0;
}

