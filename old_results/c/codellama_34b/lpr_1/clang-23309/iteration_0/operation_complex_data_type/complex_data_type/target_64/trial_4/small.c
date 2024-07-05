
#include <stdio.h>

int fn1(int p1, int p2) {
  printf("checksum = %X\n", p1);
}

int fn2(int p1, int p2) {
  return p1 - p2;
}

int fn3(int p1, int p2) {
  return p1 - p2;
}

int fn5(int p1, int p2) {
  return p2;
}

int fn6(int p1, int p2) {
  return p1 - p2;
}

int p;

void fn9(int p1, char *p2, int p3) {
  p = p1;
}

int t;
unsigned int u;
int v;
unsigned int w;
int ab;
unsigned int ac = 1L;
unsigned int fn10(int p1, int p2);
unsigned int fn11(unsigned int p1, int p2, int p3, int p4);
unsigned int fn12_inlined(int p1, int p2, unsigned int p3, int p4);

int fn13() {
  int ae = 1UL;
  fn10(u, t);
  return ae;
}

unsigned int fn10(int p1, int p2) {
  int af = 0x2F2F6D26L;
  unsigned int ag = 248UL;
  fn11(2L, ag, p2, 1);
  return af;
}

unsigned int fn11(unsigned int p1, int p2, int p3, int p4) {
  int ai = 7L;
  int aj = 1UL;
  fn12_inlined(ai, ai, p1, 0);
  return aj;
}

unsigned int fn12_inlined(int p1, int p2, unsigned int p3, int p4) {
  int al = 3L;
  int am = 1L;
  int an;
  for (w = 3; w; w--) {
    an = 250UL;
    p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
    int ao = 0xBCD1L;
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
