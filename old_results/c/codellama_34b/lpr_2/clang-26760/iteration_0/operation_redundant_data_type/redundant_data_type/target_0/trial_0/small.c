
#include <stdio.h>

int main() {
    int i;
    long j = 0x24F96B7BL;
    unsigned int k;
    for (i = 0; i;) {
        j -= 8;
        i = j;
    }
    int l = 1L;
    int m = j;
q:;
    k = k >> l;
    if (i) {
        k = k << m;
        goto q;
    }
    return 0;
}
