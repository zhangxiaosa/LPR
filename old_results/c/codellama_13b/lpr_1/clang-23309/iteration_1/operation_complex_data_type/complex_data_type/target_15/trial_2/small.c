
#include <stdio.h>

// Decomposed variables
int p1, p2, p3, p4, p5;
unsigned long p6, p7, p8;
short p9, p10, p11, p12;
f p13, p14, p15, p16;
unsigned v;

// Function prototypes
void fn1(short p1, short p2);
int fn2(int p1, int p2);
long fn3(long p1, long p2);
unsigned fn4(unsigned p1, unsigned p2);
short fn5(short p1, short p2);
short fn6(short p1, short p2);
int fn13();
short fn10(unsigned long, short);
short fn11(long, short, short, short, unsigned long);
short fn12(short, short, long, short, unsigned long);

// Function definitions
void fn1(short p1, short p2) {
  printf("checksum = %X\n", p1);
}

int fn2(int p1, int p2) {
  return p1 - p2;
}

long fn3(long p1, long p2) {
  return p1 - p2;
}

unsigned fn4(unsigned p1, unsigned p2) {
  return p1;
}

short fn5(short p1, short p2) {
  return p2;
}

short fn6(short p1, short p2) {
  return p1 - p2;
}

int fn13() {
  short ae = 1UL;
  fn10(p1, p2);
  return ae;
}

short fn10(unsigned long p1, short p2) {
  short d = 0x2F2F6D26L;
  short ag = 248UL;
  fn11(2L, ag, p2, 1);
  return d;
}

short fn11(long p1, short p2, short p3, short p4, unsigned long p5) {
  short ai = 7L;
  short aj = 1UL;
  fn12(ai, ai, p1, 0, p1);
  return aj;
}

short fn12(short p1, short p2, long p3, short p4, unsigned long p5) {
  short al = 3L;
  short an;
  for (p9 = 3; p9; p9 -= 1)
    if (an = 250UL) {
      p2 = fn5(p15, p16) || (an = p9) == 0x294A85636008822DLL;
      short ao = 0xBCD1L;
      if (fn2(fn3(ao, fn4(fn6(1UL, an), 0xECL)), p2) & 1UL)
        v = 1UL;
    }
  return al;
}

int main() {
  int ap = 0;
  fn13();
  fn9(v, "g_170", ap);
  fn1(p13, ap);
  return 0;
}
