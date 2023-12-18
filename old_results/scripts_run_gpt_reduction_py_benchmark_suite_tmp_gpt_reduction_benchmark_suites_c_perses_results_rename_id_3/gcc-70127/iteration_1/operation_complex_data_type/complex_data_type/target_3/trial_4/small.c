#include <stdio.h>

unsigned u;

signed int ab;
signed int q;

#define V_SIZE 1
struct p {
    signed int ab;
    signed int q : 22;
};

struct p v[V_SIZE];

signed int w_init_ab = 0x1C87E74F;
signed int w_init_q = 816;

int main() {
    struct p a = {8, 666};

    for (; u <= 1; u += 1) {
        a = v[0] = w_init;
        v[0] = a;
    }

    unsigned j = v[0].q;

    printf("checksum = %X\n", j);

    return 0;
}