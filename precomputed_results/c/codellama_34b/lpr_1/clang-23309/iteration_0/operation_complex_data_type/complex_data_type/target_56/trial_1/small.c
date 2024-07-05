
#include <stdio.h>

// Define variables clearly and use meaningful names
short p;
u_char u;
short v;
u_char w;
short ab;
u_char ac = 1L;

// Define functions clearly and use meaningful names
short fn1(short p1, int p2) {
  // Do something
  printf("checksum = %X\n", p1);
}

short fn2(short p1, short p2) {
  // Do something
  return p1 - p2;
}

short fn3(short p1, short p2) {
  // Do something
  return p1 - p2;
}

short fn5(short p1, short p2) {
  // Do something
  return p2;
}

short fn6(short p1, short p2) {
  // Do something
  return p1 - p2;
}

void fn9(short p1, char *p2, int p3) {
  // Do something
  p = p1;
}

short t;

short fn13() {
  // Do something
  short ae = 1UL;
  fn10(u, t);
  return ae;
}

u_char fn10(short p1, short p2) {
  // Do something
  short af = 0x2F2F6D26L;
  u_char ag = 248UL;
  fn11(2L, ag, p2, 1);
  return af;
}

u_char fn11(u_char p1, short p2, short p3, short p4) {
  // Do something
  short ai = 7L;
  short aj = 1UL;
  fn12_inlined(ai, ai, p1, 0);
  return aj;
}

u_char fn12_inlined(short p1, short p2, u_char p3, short p4) {
  // Do something
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
