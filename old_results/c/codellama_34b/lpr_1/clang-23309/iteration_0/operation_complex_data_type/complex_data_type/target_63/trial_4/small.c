
#include <stdio.h>

typedef uint8_t u_char;

void fn1(uint16_t p1, int p2) {
    printf("checksum = %X\n", p1);
}

uint16_t fn2(uint16_t p1, uint16_t p2) {
    return p1 - p2;
}

uint16_t fn3(uint16_t p1, uint16_t p2) {
    return p1 - p2;
}

uint16_t fn5(uint16_t p1, uint16_t p2) {
    return p2;
}

uint16_t fn6(uint16_t p1, uint16_t p2) {
    return p1 - p2;
}

uint16_t p;

void fn9(uint16_t p1, char *p2, int p3) {
    p = p1;
}

uint16_t t;
uint8_t u;
uint16_t v;
uint8_t w;
uint16_t ab;
uint8_t ac = 1L;
uint8_t fn10(uint16_t, uint16_t);
uint8_t fn11(uint8_t, uint16_t, uint16_t, uint16_t);
uint8_t fn12_inlined(uint16_t, uint16_t, uint8_t, uint16_t);

uint16_t fn13() {
    uint16_t ae = 1UL;
    fn10(u, t);
    return ae;
}

uint8_t fn10(uint16_t p1, uint16_t p2) {
    uint16_t af = 0x2F2F6D26L;
    uint8_t ag = 248UL;
    fn11(2L, ag, p2, 1);
    return af;
}

uint8_t fn11(uint8_t p1, uint16_t p2, uint16_t p3, uint16_t p4) {
    uint16_t ai = 7L;
    uint16_t aj = 1UL;
    fn12_inlined(ai, ai, p1, 0);
    return aj;
}

uint8_t fn12_inlined(uint16_t p1, uint16_t p2, uint8_t p3, uint16_t p4) {
    uint16_t al = 3L;
    uint16_t am = 1L;
    uint16_t an;
    for (w = 3; w; w--) {
        an = 250UL;
        p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
        uint16_t ao = 0xBCD1L;
        if (fn2(fn3(ao, fn6(am, an)), p2) & 1)
            v = 1UL;
    }
    return al;
}

int main() {
    int ap = 0;
    fn13();
    fn9(v, "g_170", ap);
    fn1(p, ap);
    return 0;
}
