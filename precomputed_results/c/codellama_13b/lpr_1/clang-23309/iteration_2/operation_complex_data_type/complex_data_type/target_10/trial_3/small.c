
#include <stdio.h>
#include <stdlib.h>

/* Function prototypes */
void fn1(short p1, int p2);
int fn2(int p1, int p2);
long fn3(long p1, long p2);
unsigned char fn4(unsigned p1, unsigned p2);
short fn6(short p1, short p2);
void fn9(unsigned p1, char *p2, int p3);

/* Function definitions */
void fn1(short p1, int p2) {
    printf("checksum = %X\n", p1);
}

int fn2(int p1, int p2) {
    return p1 - p2;
}

long fn3(long p1, long p2) {
    return p1 - p2;
}

unsigned char fn4(unsigned p1, unsigned p2) {
    return p1;
}

short fn6(short p1, short p2) {
    return p1 - p2;
}

void fn9(unsigned p1, char *p2, int p3) {
    p = p1;
}

/* Main function */
int main() {
    int ap = 0;
    long p1, p2;
    short v;
    long w;
    short ab;
    long ac = 3L;
    short ao;
    unsigned char an;

    /* Initialize variables */
    p1 = 1UL;
    p2 = 2L;
    v = 0;
    w = 3;
    ab = 0;
    ac = 3L;
    ao = 0xBCD1L;
    an = 0;

    /* Call function fn12 */
    fn12(p1, p2);

    /* Call function fn13 */
    fn13();

    /* Call function fn9 */
    fn9(v, "g_170", ap);

    /* Call function fn1 */
    fn1(p, ap);

    return 0;
}
