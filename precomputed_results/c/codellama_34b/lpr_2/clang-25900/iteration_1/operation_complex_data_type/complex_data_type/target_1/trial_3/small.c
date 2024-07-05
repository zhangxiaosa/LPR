
#include <stdio.h>

int r;
static int s = -5L;
int u;

int fn4_inlined(p1) {
    int n = 1957;
    int o = p1;
    int ae;
    int af = u;
    ae = o;
    o = u;
    r = af % (~s / ae);
    return o;
}

int main() {
    fn4_inlined(5);
}
