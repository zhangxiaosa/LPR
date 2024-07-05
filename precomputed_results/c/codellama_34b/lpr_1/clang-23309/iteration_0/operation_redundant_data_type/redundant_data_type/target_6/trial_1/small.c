
#include <stdio.h>

typedef unsigned char u_char;
typedef short s_short;

void fn1(unsigned p1, int p2) { printf("checksum = %X\n", p1); }

unsigned fn2(unsigned p1, unsigned p2) { return p1 - p2; }

unsigned fn3(unsigned p1, unsigned p2) { return p1 - p2; }

u_char fn4(u_char p1, u_char p2) { return p1; }

unsigned fn5(unsigned p1, unsigned p2) { return p2; }

unsigned fn6(unsigned p1, unsigned p2) { return p1 - p2; }

unsigned p;

void fn9(unsigned p1, char *p2, int p3) { p = p1; }

unsigned t;
u_char u;
unsigned v;
u_char w;
unsigned ab;
u_char ac = 1L;

u_char fn10(unsigned, unsigned);
u_char fn11(u_char, unsigned, unsigned, unsigned);
u_char fn12(unsigned, unsigned, u_char, unsigned, unsigned);

unsigned fn13() {
  unsigned ae = 1UL;
  fn10(u, t);
  return ae;
}

u_char fn10(unsigned p1, unsigned p2) {
  unsigned af = 0x2F2F6D26L;
  u_char ag = 248UL;
  fn11(2L, ag, p2, 1);
  return af;
}

u_char fn11(u_char p1, unsigned p2, unsigned p3, unsigned p4) {
  unsigned ai = 7L;
  unsigned aj = 1UL;
  fn12(ai, ai, p1, 0, p1);
  return aj;
}

u_char fn12(unsigned p1, unsigned p2, u_char p3, unsigned p4, unsigned p5) {
  unsigned al = 3L;
  unsigned am = 1L;
  unsigned an;
  for (w = 3; w; w -= 1) {
    an = 250UL;
    p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
    unsigned ao = 0xBCD1L;
    if (fn2(fn3(ao, fn4(fn6(am, an), 0xECL)), p2) & 1UL)
      v = 1UL;
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
