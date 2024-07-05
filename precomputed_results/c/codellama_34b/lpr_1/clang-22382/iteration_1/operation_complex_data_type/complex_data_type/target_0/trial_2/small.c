
#include <stdio.h>

struct h {
    int i;
    long j;
    unsigned k;
};

int main() {
    struct h p5;
    p5.i = 1;
    p5.j = 2;
    p5.k = 3;

    // Decompose the struct h data type into its primary data type components
    int i = p5.i;
    long j = p5.j;
    unsigned k = p5.k;

    printf("i: %d, j: %ld, k: %u\n", i, j, k);

    return 0;
}
