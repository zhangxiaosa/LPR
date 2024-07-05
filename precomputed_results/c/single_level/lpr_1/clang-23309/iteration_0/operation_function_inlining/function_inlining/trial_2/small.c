#include <stdio.h>

typedef short a;
typedef int b;
typedef long c;
typedef unsigned char d;
typedef short e;
typedef unsigned f;
typedef unsigned g;

f p;
b t;
f u;
c v;
a w;
f ab;
a ac = 1L;

void fn2(b p1, b p2);
void fn3(c p1, c p2);
d fn4(d p1, d p2);
f fn5(f p1, f p2);
f fn6(f p1, f p2);
d fn10(g p1, e p2);
d fn11(d p1, f p2, b p3, e p4);
a fn12(b p1, b p2, d p3, a p4, g p5);
b fn13();

void fn1(f p1, int p2) {
  printf("checksum = %X\n", p1);
}

void fn2(b p1, b p2) {
  b result = p1 - p2;
  // inline function body of fn2
}

void fn3(c p1, c p2) {
  c result = p1 - p2;
  // inline function body of fn3
}

d fn4(d p1, d p2) {
  return p1;
}

f fn5(f p1, f p2) {
  return p2;
}

f fn6(f p1, f p2) {
  f result = p1 - p2;
  // inline function body of fn6
}

void fn7(g p1) {
  p = p1;
}

void fn8(g p1) {
  fn7(p1);
}

void fn9(g p1, char *p2, int p3) {
  fn8(p1);
}

b t;
f u;
c v;
a w;
f ab;
a ac = 1L;

d fn10(g p1, e p2) {
  b af = 0x2F2F6D26L;
  d ag = 248UL;
  c ai = 7L;
  e aj = 1UL;
  b al = 3L;
  c am = 1L;
  b an;

  for (w = 3; w; w -= 1) {
    if (an = 250UL) {
      p2 = p2;
      f ao = 0xBCD1L;

      if (p1 - p1 >= 0xECL) {
        v = 1UL;
      }
    }
  }
  return al;
}

d fn11(d p1, f p2, b p3, e p4) {
  c ai = 7L;
  e aj = 1UL;
  b al = 3L;
  c am = 1L;
  b an;

  for (w = 3; w; w -= 1) {
    if (an = 250UL) {
      f ao = 0xBCD1L;

      if (fn2(fn3(ao, fn4(fn6(am, an)), 0xECL), p2) & 1UL) {
        v = 1UL;
      }
    }
  }
  return aj;
}

b fn13() {
  e ae = 1UL;

  b af = 0x2F2F6D26L;
  d ag = 248UL;
  d ai = 7L;

  fn11(2L, ag, 1L, 1UL);

  return ae;
}

int main() {
  int ap = 0;

  e ae = 1UL;
  b af = 0x2F2F6D26L;
  d ag = 248UL;
  c ai = 7L;
  e aj = 1UL;
  b al = 3L;
  c am = 1L;
  b an;

  for (w = 3; w; w -= 1) {
    if (an = 250UL) {
      f ao = 0xBCD1L;

      if (fn2(fn3(ao, fn4(fn6(am, an)), 0xECL), ab) & 1UL) {
        v = 1UL;
      }
    }
  }

  printf("checksum = %X\n", p);

  return 0;
}
