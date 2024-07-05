#include<stdio.h>

unsigned int u;

int ab_v[1];
int q_v[1];

struct p {
    int ab;
    int q : 22;
};

struct p w = {0x1C87E74F, 816};

int main() {
    int ab_a = 0x1C87E74F;
    int q_a = 666;

    for (; u <= 1; u += 1) {
        ab_a = ab_v[0] = w.ab;
        q_a = q_v[0] = w.q;
    }

    printf("checksum = %X\n", q_v[0]);

    return 0;
}