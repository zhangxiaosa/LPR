
#include <stdio.h>

int r;
static int s = -5L;

int fn4_inlined(p1) {
    int ae = p1;
    int ad_n = 1957;
    int ad_o = ae;
    ad_o = 0;
    r = ae % (~s / ae);
    return ad_o;
}

int main() {
    fn4_inlined(5);
    return 0;
}
