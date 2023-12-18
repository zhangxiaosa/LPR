#include <iostream>

int o;
int p;
short q;
static unsigned r = 0x2A52;
unsigned s = 0x03F238A4;
unsigned t2;

int fn2(signed p1, unsigned p2) {
    return p1;
}

int fn3(int p1, int p2) {
    return (p2 == 0 || (p1 && p2)) ? p1 : (p1 % p2);
}

static unsigned fn7(short p1) {
    int optimized_ac = fn3(p1, o);
    if (s) {
        unsigned af = 0;

        // Iteration 1 of the unrolled loop
        int ag_flat1[240] = {1};
        unsigned ah1;
        if (fn2(p1, ag_flat1[6] + p1 || p1 && (optimized_ac = fn3(p1, 0xBC2AB98C)))) {
        } else {
            ah1 = optimized_ac;
            if (!r)
                break;
        }
        p1 = (0x60781BCD >= fn3(fn3(p1, p1) > 0xB5, p1) != p1 ^ 4294967287) - ah1;
        p = p1;
        optimized_ac = fn3(0x7D765DB6, p1);

        // Iteration 2 of the unrolled loop
        int ag_flat2[240] = {1};
        unsigned ah2;
        if (fn2(p1, ag_flat2[6] + p1 || p1 && (optimized_ac = fn3(p1, 0xBC2AB98C)))) {
        } else {
            ah2 = optimized_ac;
            if (!r)
                break;
        }
        p1 = (0x60781BCD >= fn3(fn3(p1, p1) > 0xB5, p1) != p1 ^ 4294967287) - ah2;
        p = p1;
        optimized_ac = fn3(0x7D765DB6, p1);

        // Continue unrolling more iterations as needed

    } else {
        t2 = fn3(fn3(0, q), 0x9CFB623F);
    }
    return p1;
}

static int fn8() {
    if (fn7(1)) {
    }
}

int main() {
    fn8();
}
