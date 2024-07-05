#include <stdio.h>

void fn1(unsigned p1, int p2) {
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

unsigned fn5(unsigned p1, unsigned p2) {
  return p2;
}

unsigned fn6(unsigned p1, unsigned p2) {
  return p1 - p2;
}

unsigned p;

void fn9(unsigned p1, char *p2, int p3) {
  p = p1;
}

int t;
unsigned u;
long v;
short w;
unsigned ab;
short ac = 1L;

unsigned char fn11(unsigned char p1, unsigned p2, int p3, short p4) {
  long ai = 7L;
  short aj = 1UL;
  int al = 3L;
  long am = 1L;
  int an;

  for (w = 3; w; w -= 1) {
    if (an = 250UL) {
      p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
      short ao = 0xBCD1L;

      if (fn2(fn3(ao, fn4(fn6(am, an), 0xECL)), p2) & 1UL) {
        v = 1UL;
      }
    }
  }

  return aj;
}

int main() {
  int ap = 0;
  unsigned p1 = u;
  unsigned p2 = t;
  unsigned char ag = 248UL;
  long ai = 7L;
  short aj = 1UL;
  short al = 3L;
  long am = 1L;
  int an;

  for (w = 3; w; w -= 1) {
    if (an = 250UL) {
      p2 = p2 || (an = w) == 0x294A85636008822DLL;
      short ao = 0xBCD1L;

      if ((p1 - (unsigned)p2) & 1UL) {
        v = 1UL;
      }
    }
  }

  fn9(v, "g_170", ap);
  fn1(p, ap);

  return 0;
}
