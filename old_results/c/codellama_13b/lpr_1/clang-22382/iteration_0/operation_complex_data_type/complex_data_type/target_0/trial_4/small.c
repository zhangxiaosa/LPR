
#include <stdio.h>
#include <stdlib.h>

int main() {
    struct h {
        int i;
        long j;
        int k;
    };

    struct h p;

    int i = p.i;
    long j = p.j;
    int k = p.k;

    /* Optimized code goes here */

    return 0;
}
