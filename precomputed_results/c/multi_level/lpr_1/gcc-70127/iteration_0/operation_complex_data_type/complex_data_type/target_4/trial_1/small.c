#include <stdio.h>

unsigned j;
unsigned ab;
unsigned s;
unsigned u;

int v_ab[1];
signed int v_q[1];

typedef struct {
    int ab;
    signed q : 22;
} p;

typedef struct {
    unsigned ab;
    unsigned s;
} r;

p w = {0x1C87E74F, 816};

unsigned fn5(unsigned p1, signed p2, unsigned p3, unsigned p4, unsigned p5) {
    p a = {8L, 666};
    unsigned prev_u = u;
    
    for (p2 = 0; p2 >= 0; p2 -= 1)
        for (u = prev_u; u <= 1; u += 1) {
            a = w;
        }
    
    return 0;
}

int main() {
    fn5(ab, 2, 2, s, 9);
    j = w.q;
    printf("checksum = %X\n", j);
    return 0;
}