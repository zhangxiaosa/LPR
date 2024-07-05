
#include <stdio.h>

#define SHORT int
#define INT int
#define LONG long
#define UNSIGNED_CHAR unsigned char
#define UNSIGNED_SHORT unsigned short
#define UNSIGNED_INT unsigned int

int fn2(int p1, int p2) { return p1 - p2; }
long fn3(long p1, long p2) { return p1 - p2; }
unsigned char fn4(unsigned char p1, unsigned char p2) { return p1; }
unsigned short fn5(unsigned short p1, unsigned short p2) { return p2; }
unsigned short fn6(unsigned char p1, unsigned short p2) { return p1 - p2; }
unsigned long p;
void fn9(unsigned int p1, char *p2, int p3) { p = p1; }
unsigned short t;
unsigned short u;
long v;
unsigned short w;
unsigned short ab;
unsigned short ac = 1L;
unsigned char fn10(int, unsigned short);
unsigned char fn11(unsigned char, unsigned short, unsigned int, unsigned short);
unsigned short fn12(unsigned int, unsigned int, unsigned char, unsigned short, unsigned int);
int fn13() {
  unsigned short ae = 1UL;
  fn10(u, t);
  return ae;
}
unsigned char fn10(int p1, unsigned short p2) {
  unsigned long af = 0x2F2F6D26L;
  unsigned char ag = 248UL;
  fn11(2L, ag, p2, 1);
  return af;
}
unsigned char fn11(unsigned char p1, unsigned short p2, unsigned int p3, unsigned short p4) {
  unsigned long ai = 7L;
  unsigned short aj = 1UL;
  fn12(ai, ai, p1, 0, p1);
  return aj;
}
unsigned short fn12(unsigned int p1, unsigned int p2, unsigned char p3, unsigned short p4, unsigned int p5) {
  unsigned int al = 3L;
  unsigned long am = 1L;
  unsigned int an;
  for (w = 3; w; w -= 1) {
    an = 250UL;
    p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
    unsigned short ao = 0xBCD1L;
    if (fn2(fn3(ao, fn4(fn6(am, an), 0xECL)), p2) & 1UL)
      v = 1UL;
  }
  return al;
}
int main() {
  unsigned int ap = 0;
  fn13();
  fn9(v, "g_170", ap);
  printf("checksum = %X\n", p);
  return 0;
}
