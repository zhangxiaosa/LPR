
#include <stdio.h>

typedef unsigned char u_char;

void fn1(unsigned char p1, short p2) {
  printf("checksum = %X\n", p1);
}

short fn2(unsigned char p1, short p2) {
  return p1 - p2;
}

short fn3(unsigned char p1, short p2) {
  return p1 - p2;
}

short fn5(unsigned char p1, short p2) {
  return p2;
}

short fn6(unsigned char p1, short p2) {
  return p1 - p2;
}

unsigned char p;

void fn9(unsigned char p1, char *p2, int p3) {
  p = p1;
}

unsigned char t;
unsigned char u;
short v;
unsigned char w;
unsigned char ab;
unsigned char ac = 1L;
unsigned char fn10(unsigned char, unsigned char);
unsigned char fn11(unsigned char, unsigned char, unsigned char, unsigned char);
unsigned char fn12_inlined(unsigned char, unsigned char, unsigned char, unsigned char);

unsigned char fn13() {
  unsigned char ae = 1UL;
  fn10(u, t);
  return ae;
}

unsigned char fn10(unsigned char p1, unsigned char p2) {
  unsigned char af = 0x2F2F6D26L;
  unsigned char ag = 248UL;
  fn11(2L, ag, p2, 1);
  return af;
}

unsigned char fn11(unsigned char p1, unsigned char p2, unsigned char p3, unsigned char p4) {
  unsigned char ai = 7L;
  unsigned char aj = 1UL;
  fn12_inlined(ai, ai, p1, 0);
  return aj;
}

unsigned char fn12_inlined(unsigned char p1, unsigned char p2, unsigned char p3, unsigned char p4) {
  unsigned char al = 3L;
  unsigned char am = 1L;
  unsigned char an;
  for (w = 3; w; w--) {
    an = 250UL;
    p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
    unsigned char ao = 0xBCD1L;
    if (fn2(fn3(ao, fn6(am, an)), p2) & 1)
      v = 1UL;
  }
  return al;
}

int main() {
  unsigned char ap = 0;
  fn13();
  fn9(v, "g_170", ap);
  fn1(p, ap);
  return 0;
}
