#include <stdio.h>

unsigned j;

void fn2(int p1) {
    j = p1;
}

struct p {
    int ab;
    signed q:22;
};

struct r {
    unsigned ab;
    unsigned s;
};

struct r t;

unsigned u;

struct p v[1];

struct p w = {0x1C87E74FL, 816};

unsigned fn5(unsigned p1, signed p2, unsigned p3, unsigned p4) {
    struct p a = {8L, 666};
    if (p2 >= 0) {
        if (u <= 1) {
            a = v[0] = w;
            v[0] = a;
        }
    }
}

int main() {
    int i;
    fn5(t.ab, 3, 2, t.s);
    fn2(v[0].q);
    printf("checksum = %X\n", j);
    return 0;
}