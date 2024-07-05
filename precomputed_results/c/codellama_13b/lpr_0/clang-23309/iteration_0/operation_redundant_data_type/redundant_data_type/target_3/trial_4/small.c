
#include <stdio.h>

int fn2(int p1, int p2) { return p1 - p2; }
long fn3(long p1, long p2) { return p1 - p2; }
unsigned char fn4(unsigned char p1, unsigned char p2) { return p1; }
unsigned fn5(unsigned p1, unsigned p2) { return p2; }
unsigned fn6(unsigned p1, unsigned p2) { return p1 - p2; }
unsigned p;
void fn9(unsigned long p1, char *p2, int p3) { p = p1; }
unsigned t;
unsigned u;
long v;
short w;
unsigned ab;
short ac = 1;
unsigned char fn10(unsigned long, unsigned short);
unsigned char fn11(unsigned char, unsigned short, unsigned char, unsigned short);
short fn12(unsigned char, unsigned char, unsigned char, unsigned short, unsigned long);

int fn13() {
  unsigned short ae = 1;
  fn10(u, t);
  return ae;
}

unsigned char fn10(unsigned long p1, unsigned short p2) {
  int af = 0x2F2F6D26;
  unsigned char ag = 248;
  fn11(2, ag, p2, 1);
  return af;
}

unsigned char fn11(unsigned char p1, unsigned short p2, unsigned char p3, unsigned short p4) {
  long ai = 7;
  unsigned short aj = 1;
  fn12(ai, ai, p1, 0, p1);
  return aj;
}

short fn12(unsigned char p1, unsigned char p2, unsigned char p3, unsigned short p4, unsigned long p5) {
  int al = 3;
  long am = 1;
  int an;
  for (w = 3; w; w -= 1) {
    an = 250;
    p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822D;
    unsigned char ao = 0xBCD1;
    if (fn2(fn3(ao, fn4(fn6(am, an), 0xEC)), p2) & 1)
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
