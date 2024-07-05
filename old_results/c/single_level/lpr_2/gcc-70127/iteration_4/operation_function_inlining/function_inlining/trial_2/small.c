#include <stdio.h>

unsigned j;
unsigned u;

struct p {
    int ab;
    int q : 22;
};

struct p v[1];

struct p w = {0x1C87E74FL, 816};

int main() {
    struct p a = {8L, 666};
    u = 0;

    // Inline the loop
    a = v[0] = w;  // Assign w to v[0] and a
    v[0] = a;
    j = v[0].q;

    printf("checksum = %X\n", j);
    return 0;
}