
#include <stdio.h>

void fn1(int p1, int p2) { printf("checksum = %X\n", p1); }

int fn2(int p1, int p2) { return p1 - p2; }

int fn3(int p1, int p2) { return p1 - p2; }

int fn5(int p1, int p2) { return p2; }

int fn6(int p1, int p2) { return p1 - p2; }

int p;

void fn9(int p1, char *p2) { p = p1; }

int t;
unsigned int u;
int v;
unsigned int w;
int ab;
unsigned int ac = 1;
unsigned int fn10(int, int);
unsigned int fn11(unsigned int, int, int, int);

int fn13() {
  int ae = 1;
  fn10(u, t);
  return ae;
}

unsigned int fn10(int p1, int p2) {
  int af = 0x2F2F6D26;
  unsigned int ag = 248;
  fn11(2, ag, p2, 1);
  return af;
}

unsigned int fn11(unsigned int p1, int p2, int p3, int p4) {
  int ai = 7;
  int aj = 1;
  int al = 3;
  int am = 1;
  int an;
  for (w = 3; w; w--) {
    an = 250;
    p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822D;
    int ao = 0xBCD1;
    if (fn2(fn3(ao, fn6(am, an)), p2) & 1)
      v = 1;
  }
  return al;
}

int main() {
  fn13();
  fn9(v, "g_170");
  fn1(p, 0);
  return 0;
}
