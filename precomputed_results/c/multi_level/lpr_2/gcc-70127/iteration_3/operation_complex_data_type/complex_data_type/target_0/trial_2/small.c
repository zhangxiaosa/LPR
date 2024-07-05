#include <stdio.h>

struct p {
    int ab;
    int q : 22;
};

int u = 0;
int ab_v0;
int q_v0;

int ab_w = 0x1C87E74F;
int q_w = 816;

int ab_a = 8;
int q_a = 666;

int main() {
    struct p v[1];
    struct p a = {ab_a, q_a};

    for (; u <= 1; u += 1) {
        a = v[0] = (struct p){ab_w, q_w};
        v[0] = a;
    }

    printf("checksum = %X\n", v[0].q);
    return 0;
}