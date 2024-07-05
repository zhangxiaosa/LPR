
#include <stdio.h>

typedef short int16_t;
typedef int int32_t;
typedef long int64_t;
typedef unsigned char uint8_t;
typedef short uint16_t;
typedef unsigned int32_t;

int32_t fn2(int32_t p1, int16_t p2) { return p1 - p2; }
int64_t fn3(int64_t p1, int64_t p2) { return p1 - p2; }
uint8_t fn4(uint8_t p1, uint8_t p2) { return p1; }
int16_t fn5(int16_t p1, int16_t p2) { return p2; }
int16_t fn6(uint8_t p1, int16_t p2) { return p1 - p2; }
uint64_t p;
void fn9(uint64_t p1, char *p2, int32_t p3) { p = p1; }
int32_t t;
int16_t u;
int64_t v;
int16_t w;
int16_t ab;
int16_t ac = 1;
int32_t fn10(int32_t, int16_t);
int32_t fn11(int32_t, int16_t, int32_t, int16_t);
int16_t fn12(int32_t, int32_t, uint8_t, int16_t, int32_t);
int32_t fn13() {
    int16_t ae = 1;
    fn10(u, t);
    return ae;
}
int32_t fn10(int32_t p1, int16_t p2) {
    int32_t af = 0x2F2F6D26;
    int16_t ag = 248;
    fn11(2, ag, p2, 1);
    return af;
}
int32_t fn11(int32_t p1, int16_t p2, int32_t p3, int16_t p4) {
    int64_t ai = 7;
    int16_t aj = 1;
    fn12(ai, ai, p1, 0, p1);
    return aj;
}
int16_t fn12(int32_t p1, int32_t p2, uint8_t p3, int16_t p4, int32_t p5) {
    int32_t al = 3;
    int64_t am = 1;
    int32_t an;
    for (w = 3; w; w -= 1) {
        an = 250;
        p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822DULL;
        int16_t ao = 0xBCD1;
        if (fn2(fn3(ao, fn4(fn6(am, an), 0xECL)), p2) & 1ULL)
            v = 1ULL;
    }
    return al;
}
int main() {
    int32_t ap = 0;
    fn13();
    fn9(v, "g_170", ap);
    printf("checksum = %X\n", p);
    return 0;
}
