
#include <stdio.h>

int main() {
    int ad = 1957;
    int ae;
    int af = 0;
    ae = 5;
    af = 0;
    af = ad % (~5 / ae);
    printf("af: %d\n", af);
}
