
#include <stdio.h>

#define short int16_t
#define int int32_t
#define long unsigned long
#define unsigned char uint8_t
#define unsigned uint32_t
#define unsigned long uint64_t

void fn1(uint32_t p1, int p2) {
    printf("checksum = %X\n", p1);
}

int fn2(int p1, int p2) {
    return p1 - p2;
}

unsigned long fn3_clone(unsigned long p1, unsigned char p2) {
    return p1 - p2;
}

unsigned char fn4(unsigned char p1, unsigned char p2) {
    return p1;
}

uint32_t fn5(uint32_t p1, uint32_t p2) {
    return p2;
}

uint32_t fn6(uint32_t p1, uint32_t p2) {
    return p1 - p2;
}

unsigned long p;

void fn9(uint64_t p1, char *p2, int p3) {
    p = p1;
}

int t;
uint32_t u;
unsigned long v;
int w;
uint32_t ab;
int ac = 1;

int fn10(uint64_t p1, int p2) {
    int af = 0x2F2F6D26;
    int ag = 248;
    fn11(2, ag, p2, 1);
    return af;
}

int fn11(int p1, int p2, int p3, int p4) {
    unsigned long ai = 7;
    int aj = 1;
    fn12(ai, ai, p1, 0, p1);
    return aj;
}

int fn12(int p1, int p2, int p3, int p4, uint64_t p5) {
    int al = 3;
    unsigned long am = 1;
    int an;
    for (w = 3; w; w -= 1) {
        if (an = 250) {
            p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822D;
            int ao = 0xBCD1;
            if (fn2(fn3_clone(ao, fn4(fn6(am, an), 0xE)), p2) & 1)
                v = 1;
        }
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
