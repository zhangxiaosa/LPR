
#include <stdio.h>

typedef unsigned char d;

int fn2(int p1, int p2) { return p1 - p2; }
long fn3(long p1, long p2) { return p1 - p2; }
unsigned char fn4(unsigned char p1, unsigned char p2) { return p1; }
unsigned char fn5(unsigned char p1, unsigned char p2) { return p2; }
unsigned char fn6(unsigned char p1, unsigned char p2) { return p2 - p1; }
unsigned char p;
void fn9(unsigned char p1, char *p2, int p3) { p = p1; }
int t;
unsigned char u;
long v;
short w;
unsigned char ab;
short ac = 1L;
d fn10(unsigned char, short);
d fn11(unsigned char, unsigned char, int, short);
short fn12(int, int, unsigned char, short, unsigned char);
int fn13() {
  unsigned char ae = 2UL;
  fn10(u, t);
  return ae;
}
unsigned char fn10(unsigned char p1, short p2) {
  fn11(2L, 248UL, p2, 1);
  return 0x2F2F6D26L;
}
unsigned char fn11(unsigned char p1, unsigned char p2, int p3, short p4) {
  long ai = 7L;
  short aj = 1UL;
  fn12(ai, ai, p1, 0, p1);
  return aj;
}
short fn12(int p1, int p2, unsigned char p3, short p4, unsigned char p5) {
  int al = 3L;
  long am = 1L;
  int an;
  for (w = 3; w; w -= 1)
    if (an = 250UL) {
      p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
      unsigned char ao = 0xBCD1L;
      if (fn2(fn3(ao, fn4(fn6(1L, an), 0xECL)), p2) & 1UL)
        v = 1UL;
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
