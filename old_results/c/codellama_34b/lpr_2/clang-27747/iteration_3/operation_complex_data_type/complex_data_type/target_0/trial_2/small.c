
#include <stdio.h>
#include <stdint.h>

int main() {
    int16_t d1, d2, n, p;
    struct c {
        int16_t d : 18;
    } i, j;

    d1 = j.d;
    d2 = l.d;
    n = j.d && d2;
    p = d2 | -(d2 && d2) - n;
    i.d = p;
}
