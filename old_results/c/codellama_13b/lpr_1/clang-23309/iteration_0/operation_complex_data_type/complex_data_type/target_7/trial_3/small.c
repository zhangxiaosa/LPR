
#include <stdio.h>
#include <stdlib.h>

int main() {
  int p = 0;
  fn1(p, 0);
  return 0;
}

void fn1(int p1, int p2) {
  printf("checksum = %X\n", p1);
}

int fn2(int p1, int p2) {
  return p1 - p2;
}

int fn3_clone(int p1, int p2) {
  return p1 - p2;
}

int fn4(int p1, int p2) {
  return p1;
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
int u;
int v;
int w;
int ab;
int ac = 1;
int fn10(int, int);
int fn11(int, int, int, int);
int fn12(int, int, int, int, int);

int fn13() {
  int ae = 1;
  fn10(u, t);
  return ae;
}

int fn10(int p1, int p2) {
  int af = 0x2F2F6D26L;
  int ag = 248UL;
  fn11(2, ag, p2, 1);
  return af;
}

int fn11(int p1, int p2, int p3, int p4) {
  int ai = 7L;
  int aj = 1UL;
  fn12(ai, ai, p1, 0, p1);
  return aj;
}

int fn12(int p1, int p2, int p3, int p4, int p5) {
  int al = 3L;
  int am = 1L;
  int an;
  for (w = 3; w; w -= 1) {
    if (an = 250UL) {
      p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
      int ao = 0xBCD1L;
      if (fn2(fn3_clone(ao, fn4(fn6(am, an), 0xECL)), p2) & 1UL) {
        v = 1UL;
      }
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
