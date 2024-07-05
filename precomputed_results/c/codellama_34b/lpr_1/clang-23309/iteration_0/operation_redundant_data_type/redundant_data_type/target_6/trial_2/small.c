
#include <stdio.h>

void fn1(int p1, int p2) { printf("checksum = %X\n", p1); }

int fn2(int p1, int p2) { return p1 - p2; }

int fn3(int p1, int p2) { return p1 - p2; }

unsigned char fn4(unsigned char p1, unsigned char p2) { return p1; }

int fn5(int p1, int p2) { return p2; }

int fn6(int p1, int p2) { return p1 - p2; }

int p;

void fn9(int p1, char *p2, int p3) { p = p1; }

int t;
unsigned char u;
int v;
unsigned char w;
int ab;
unsigned char ac = 1L;

unsigned char fn10(int p1, int p2);
unsigned char fn11(unsigned char p1, int p2, int p3, int p4);
unsigned char fn12(int p1, int p2, unsigned char p3, int p4, int p5);

int fn13() {
  int ae = 1UL;
  fn10(u, t);
  return ae;
}

unsigned char fn10(int p1, int p2) {
  int af = 0x2F2F6D26L;
  unsigned char ag = 248UL;
  fn11(2L, ag, p2, 1);
  return af;
}

unsigned char fn11(unsigned char p1, int p2, int p3, int p4) {
  int ai = 7L;
  int aj = 1UL;
  fn12(ai, ai, p1, 0, p1);
  return aj;
}

unsigned char fn12(int p1, int p2, unsigned char p3, int p4, int p5) {
  int al = 3L;
  int am = 1L;
  int an;
  for (w = 3; w; w -= 1) {
    an = 250UL;
    p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
    int ao = 0xBCD1L;
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
