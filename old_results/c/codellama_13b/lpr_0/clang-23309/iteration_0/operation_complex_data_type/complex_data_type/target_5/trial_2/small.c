
#include <stdio.h>

int fn2(int p1, int p2) { return p1 - p2; }
unsigned long fn3(unsigned long p1, unsigned long p2) { return p1 - p2; }
unsigned char fn4(unsigned char p1, unsigned char p2) { return p1; }
unsigned short fn5(unsigned short p1, unsigned short p2) { return p2; }
unsigned short fn6(unsigned short p1, unsigned short p2) { return p1 - p2; }
unsigned short p;
void fn9(unsigned int p1, char *p2, int p3) { p = p1; }
unsigned int t;
unsigned short u;
unsigned long v;
int w;
unsigned short ab;
unsigned short ac = 1;
unsigned int fn10(int, unsigned short);
unsigned int fn11(unsigned int, unsigned short, unsigned short, unsigned short);
int fn12(unsigned short, unsigned short, unsigned char, unsigned short, unsigned int);
unsigned int fn13() {
  unsigned short ae = 1;
  fn10(u, t);
  return ae;
}
unsigned int fn10(int p1, unsigned short p2) {
  unsigned int af = 0x2F2F6D26;
  unsigned long ag = 248;
  fn11(2, ag, p2, 1);
  return af;
}
unsigned long fn11(unsigned long p1, unsigned short p2, unsigned short p3, unsigned short p4) {
  unsigned long ai = 7;
  unsigned short aj = 1;
  fn12(ai, ai, p1, 0, p1);
  return aj;
}
int fn12(unsigned short p1, unsigned short p2, unsigned char p3, unsigned short p4, unsigned int p5) {
  int al = 3;
  unsigned long am = 1;
  int an;
  for (w = 3; w; w -= 1) {
    an = 250;
    p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822D;
    unsigned short ao = 0xBCD1;
    if (fn2(fn3(ao, fn4(fn6(am, an), 0xECL)), p2) & 1)
      v = 1;
  }
  return al;
}
int main() {
  int ap = 0;
  fn13();
  fn9(v, "g_170", ap);
  printf("checksum = %X\n", p);
  return 0;
}
