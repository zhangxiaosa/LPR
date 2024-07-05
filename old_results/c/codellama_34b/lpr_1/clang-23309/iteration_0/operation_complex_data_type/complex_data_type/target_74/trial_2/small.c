
#include <stdio.h>

typedef unsigned char u_char;

void fn1(short p1, int p2) { printf("checksum = %X\n", p1); }

short fn2(short p1, short p2) { return p1 - p2; }

short fn3(short p1, short p2) { return p1 - p2; }

short fn5(short p1, short p2) { return p2; }

short fn6(short p1, short p2) { return p1 - p2; }

short p;

void fn9(short p1, char *p2, int p3) { p = p1; }

short t;
char u;
char v;
short ab;
char ac = 1;
char fn10(short, short);
char fn11(char, short, short, short);
char fn12_inlined(short, short, char, short);

short fn13() {
  short ae = 1UL;
  fn10(u, t);
  return ae;
}

char fn10(short p1, short p2) {
  short af = 0x2F2F6D26L;
  char ag = 248UL;
  fn11(2L, ag, p2, 1);
  return af;
}

char fn11(char p1, short p2, short p3, short p4) {
  short ai = 7L;
  short aj = 1UL;
  fn12_inlined(ai, ai, p1, 0);
  return aj;
}

char fn12_inlined(short p1, short p2, char p3, short p4) {
  short al = 3L;
  short am = 1L;
  short an;
  for (w = 3; w; w--) {
    an = 250UL;
    p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
    short ao = 0xBCD1L;
    if (fn2(fn3(ao, fn6(am, an)), p2) & 1)
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
