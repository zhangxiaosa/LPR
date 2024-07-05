#include <stdio.h>

struct p {
    int ab;
    int q : 22;
};

unsigned u;
struct p v[1];
struct p w = {0x1C87E74Fu, 816u};

int main() {
    struct p a = {8L, 666};

    // Unrolled loop iteration 1
    a = v[0] = w;
    v[0] = a;

    // Unrolled loop iteration 2
    a = v[0] = w;
    v[0] = a;

    printf("checksum = %X\n", v[0].q);
    return 0;
}
