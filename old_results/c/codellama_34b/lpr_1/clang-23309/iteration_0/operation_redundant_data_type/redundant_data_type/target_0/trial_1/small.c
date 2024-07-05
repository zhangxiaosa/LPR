
#include <stdio.h>

void fn1(long p1, int p2) {
  printf("checksum = %X\n", p1);
}

int fn2(int p1, int p2) {
  return p1 - p2;
}

long fn3(long p1, long p2) {
  return p1 - p2;
}

unsigned char fn4(unsigned char p1, unsigned char p2) {
  return p1;
}

long fn5(long p1, long p2) {
  return p2;
}

long fn6(long p1, long p2) {
  return p1 - p2;
}

void fn10(long p1, int p2) {
  long af = 0x2F2F6D26L;
  unsigned long ag = 248UL;
  fn11(2L, ag, p2, 1);
  return af;
}

unsigned long fn11(unsigned long p1, long p2, int p3, int p4) {
  long ai = 7L;
  unsigned long aj = 1UL;
  fn12(ai, ai, p1, 0, p1);
  return aj;
}

long fn12(long p1, long p2, unsigned long p3, long p4, long p5) {
  long al = 3L;
  long am = 1L;
  long an;
  for (long w = 3; w; w -= 1) {
    an = 250UL;
    p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
    long ao = 0xBCD1L;
    if (fn2(fn3(ao, fn4(fn6(am, an), 0xECL)), p2) & 1UL)
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
