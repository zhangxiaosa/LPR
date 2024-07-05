
#include <stdio.h>

void fn1(unsigned int p1, int p2) { printf("checksum = %X\n", p1); }
int fn2(int p1, int p2) { return p1 - p2; }
unsigned long fn3_clone(unsigned long p1, unsigned long p2) { return p1 - p2; }
unsigned char fn4(unsigned char p1, unsigned char p2) { return p1; }
unsigned int fn5(unsigned int p1, unsigned int p2) { return p2; }
unsigned int fn6(unsigned int p1, unsigned int p2) { return p1 - p2; }
unsigned int p;
void fn9(unsigned long p1, const char *p2, int p3) { p = p1; }
int t;
unsigned int u;
unsigned long v;
unsigned char ab;
unsigned short ac = 1;
void fn10(unsigned long p1, unsigned int p2) {
  unsigned long af = 0x2F2F6D26;
  unsigned int ag = 248;
  fn11(2, ag, p2, 1);
  return af;
}
void fn11(unsigned long p1, unsigned int p2, unsigned int p3, unsigned int p4) {
  unsigned long ai = 7;
  unsigned int aj = 1;
  fn12(ai, ai, p1, 0, p1);
  return aj;
}
unsigned short fn12(unsigned long p1, unsigned long p2, unsigned long p3, unsigned short p4, unsigned long p5) {
  unsigned long al = 3;
  unsigned long am = 1;
  unsigned int an;
  for (unsigned short w = 3; w; w -= 1)
    if (an = 250) {
      unsigned char ap = fn5(ab, ac) || (an = w) == 0x294A85636008822D;
      unsigned short ao = 0xBCD1;
      if (fn2(fn3_clone(ao, fn4(fn6(am, an), 0xE)), ap) & 1)
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
