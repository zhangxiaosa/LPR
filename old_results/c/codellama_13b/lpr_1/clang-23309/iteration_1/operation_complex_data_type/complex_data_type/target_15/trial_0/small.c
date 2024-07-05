
#include <stdio.h>

#define INTEGER signed int
#define UNSIGNED_INTEGER unsigned int
#define LONG signed long
#define UNSIGNED_LONG unsigned long
#define SHORT signed short
#define UNSIGNED_SHORT unsigned short
#define CHAR signed char
#define UNSIGNED_CHAR unsigned char

INTEGER fn1(SHORT p1, INTEGER p2) { printf("checksum = %X\n", p1); }

INTEGER fn2(INTEGER p1, INTEGER p2) { return p1 - p2; }

LONG fn3(LONG p1, LONG p2) { return p1 - p2; }

UNSIGNED_CHAR fn4(UNSIGNED_CHAR p1, UNSIGNED_CHAR p2) { return p1; }

SHORT fn5(SHORT p1, SHORT p2) { return p2; }

SHORT fn6(SHORT p1, SHORT p2) { return p1 - p2; }

INTEGER p;

void fn9(UNSIGNED_LONG p1, CHAR *p2, INTEGER p3) { p = p1; }

INTEGER t;
INTEGER u;
UNSIGNED_LONG v;
SHORT w;
SHORT ab;
UNSIGNED_LONG ac = 1L;

INTEGER fn10(UNSIGNED_LONG, SHORT);
INTEGER fn11(LONG, SHORT, INTEGER, SHORT);
INTEGER fn12(INTEGER, INTEGER, LONG, SHORT, UNSIGNED_LONG);

INTEGER fn13() {
  SHORT ae = 1UL;
  fn10(u, t);
  return ae;
}

INTEGER fn10(UNSIGNED_LONG p1, SHORT p2) {
  INTEGER d = 0x2F2F6D26L;
  SHORT ag = 248UL;
  fn11(2L, ag, p2, 1);
  return d;
}

INTEGER fn11(LONG p1, SHORT p2, INTEGER p3, SHORT p4) {
  INTEGER ai = 7L;
  SHORT aj = 1UL;
  fn12(ai, ai, p1, 0, p1);
  return aj;
}

INTEGER fn12(INTEGER p1, INTEGER p2, LONG p3, SHORT p4, UNSIGNED_LONG p5) {
  INTEGER al = 3L;
  UNSIGNED_LONG an;
  for (w = 3; w; w -= 1)
    if (an = 250UL) {
      p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
      SHORT ao = 0xBCD1L;
      if (fn2(fn3(ao, fn4(fn6(1UL, an), 0xECL)), p2) & 1UL)
        v = 1UL;
    }
  return al;
}

int main() {
  INTEGER ap = 0;
  fn13();
  fn9(v, "g_170", ap);
  fn1(p, ap);
  return 0;
}
