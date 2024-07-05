
#include <stdio.h>

typedef unsigned char u_char;

void fn1(int p1, int p2) { printf("checksum = %X\n", p1); }

int fn2(int p1, int p2) { return p1 - p2; }

int fn3(int p1, int p2) { return p1 - p2; }

int fn5(int p1, int p2) { return p2; }

int fn6(int p1, int p2) { return p1 - p2; }

int p;

void fn9(int p1, char *p2, int p3) { p = p1; }

int t;
u_char u;
int v;
u_char w;
int ab;
u_char ac = 1;
int fn10(int p1, int p2) {
  int af = 0x2F2F6D26;
  u_char ag = 248;
  fn11(2, ag, p2, 1);
  return af;
}

u_char fn11(u_char p1, int p2, int p3, int p4) {
  int ai = 7;
  int aj = 1;
  fn12_inlined(ai, ai, p1, 0);
  return aj;
}

u_char fn12_inlined(int p1, int p2, u_char p3, int p4) {
  int al = 3;
  int am = 1;
  int an;
  for (w = 3; w; w--) {
    an = 250;
    p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
    int ao = 0xBCD1;
    if (fn2(fn3(ao, fn6(am, an)), p2) & 1)
      v = 1;
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
