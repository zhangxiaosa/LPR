
#include <stdio.h>

int p1;
int p2;
int t1;
int t2;
int v1;
int v2;
int w1;
int w2;
int ab1;
int ab2;
int ac1;
int ac2;

int fn2(int p1, int p2) { return p1 - p2; }
int fn3(int p1, int p2) { return p1 - p2; }
int fn4(int p1, int p2) { return p1; }
int fn5(int p1, int p2) { return p2; }
int fn6(int p1, int p2) { return p1 - p2; }

int fn13() {
  int ae = 1UL;
  fn10(v1, t1);
  return ae;
}

int fn10(int p1, int p2) {
  int af = 0x2F2F6D26L;
  int ag = 248UL;
  fn12(2L, ag, p2, 1, p1);
  return af;
}

int fn12(int p1, int p2, int p3, int p4, int p5) {
  int al = 3L;
  int am = 1L;
  int an;
  for (w1 = 3; w1; w1 -= 1)
    if (an = 250UL) {
      p2 = fn5(ab1, ac1) || (an = w1) == 0x294A85636008822DLL;
      int ao = 0xBCD1L;
      if (fn2(fn3(ao, fn4(fn6(am, an), 0xECL)), p2) & 1UL)
        v1 = 1UL;
    }
  return al;
}

int main() {
  fn13();
  p1 = v1;
  printf("checksum = %X\n", p1);
  return 0;
}
