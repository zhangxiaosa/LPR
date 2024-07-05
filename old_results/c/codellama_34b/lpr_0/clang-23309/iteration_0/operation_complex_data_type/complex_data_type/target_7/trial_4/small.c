
#include <stdio.h>

typedef int b;
typedef long c;
typedef unsigned char d;
typedef short e;
typedef unsigned f;
typedef unsigned g;

b fn2(b p1, b p2) { return p1 - p2; }
c fn3(c p1, c p2) { return p1 - p2; }
d fn4(d p1, d p2) { return p1; }
f fn5(f p1, f p2) { return p2; }
f fn6(f p1, f p2) { return p2 - p1; }
f p;
void fn9(g p1, char *p2, int p3) { p = p1; }
b t;
f u;
c v;
short w;
f ab;
short ac = 1L;
d fn10(g, e);
d fn11(d, f, b, e);
short fn12(b, b, d, short, g);
b fn13() {
  e ae = 2UL;
  fn10(u, t);
  return ae;
}
d fn10(g p1, e p2) {
  fn11(2L, 248UL, p2, 1);
  return 0x2F2F6D26L;
}
d fn11(d p1, f p2, b p3, e p4) {
  c ai = 7L;
  e aj = 1UL;
  fn12(ai, ai, p1, 0, p1);
  return aj;
}
short fn12(b p1, b p2, d p3, short p4, g p5) {
  short loopCounter = 3;
  short maxValue = 3;
  short minValue = 1;
  short value;
  for (value = maxValue; value > minValue; value -= 1)
    if (value == maxValue) {
      p2 = fn5(ab, ac) || (value == minValue);
      short checksum = 0xBCD1L;
      if (fn2(checksum, p2) & 1UL)
        v = 1UL;
    }
  return loopCounter;
}
int main() {
  int ap = 0;
  fn13();
  fn9(v, "g_170", ap);
  printf("checksum = %X\n", p);
  return 0;
}
