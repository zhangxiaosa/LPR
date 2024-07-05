
#include <stdio.h>

int short p1;
int short p2;
int short p3;
int short p4;
int short p5;
int short an;
int short ao;
int short ae;
int short ap;
int short w;
int short ab;
int long ac;
int unsigned p;
int unsigned v;

void fn1(short p1, int p2) { printf("checksum = %X\n", p1); }

int fn2(int p1, int p2) { return p1 - p2; }

long fn3(long p1, long p2) { return p1 - p2; }

unsigned char fn4(unsigned p1, unsigned p2) { return p1; }

short fn6(short p1, short p2) { return p1 - p2; }

void fn9(unsigned p1, char *p2, int p3) { p = p1; }

int fn12(long p1, long p2, long p3, short p4, unsigned p5) {
  w = 3;
  while (w) {
    if (an = 250UL) {
      p2 = fn6(ab, ac) || (an = w) == 0x294A85636008822DLL;
      ao = 0xBCD1L;
      if (fn2(fn3(ao, fn4(fn6(1UL, an), 0xECL)), p2) & 1UL)
        v = 1UL;
    }
  }
  return 3L;
}

int fn13() {
  ae = 1UL;
  fn12(ae, ae, 2L, 0, 2L);
  return ae;
}

int main() {
  ap = 0;
  fn13();
  fn9(v, "g_170", ap);
  fn1(p, ap);
  return 0;
}
