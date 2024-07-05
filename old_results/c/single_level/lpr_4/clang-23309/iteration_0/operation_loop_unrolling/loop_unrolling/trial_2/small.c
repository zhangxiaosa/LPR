#include <stdio.h>

typedef short a;
typedef int b;
typedef long c;
typedef unsigned char d;
typedef short e;
typedef unsigned f;
typedef unsigned g;

void fn1(f p1, int p2) {
  printf("checksum = %X\n", p1);
}

b fn2(b p1, b p2) {
  return p1 - p2;
}

c fn3(c p1, c p2) {
  return p1 - p2;
}

d fn4(d p1, d p2) {
  return p1;
}

f fn5(f p1, f p2) {
  return p2;
}

f fn6(f p1, f p2) {
  return p1 - p2;
}

f p;

void fn7(f p1) {
  p = p1;
}

void fn8(f p1) {
  fn7(p1);
}

void fn9(g p1, char* p2, int p3) {
  fn8(p1);
}

c v;
a w;
f ab;
a ac = 1L;

b fn13() {
  e ae = 1UL;
  c am = 1L;
  b an;

  if (an = 250UL) {
    ab = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
    a ao = 0xBCD1L;
    if (fn2(fn3(ao, fn4(fn6(am, an), 0xECL)), ab) & 1UL)
      v = 1UL;
  }

  if (an = 250UL) {
    ab = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
    a ao = 0xBCD1L;
    if (fn2(fn3(ao, fn4(fn6(am, an), 0xECL)), ab) & 1UL)
      v = 1UL;
  }

  if (an = 250UL) {
    ab = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
    a ao = 0xBCD1L;
    if (fn2(fn3(ao, fn4(fn6(am, an), 0xECL)), ab) & 1UL)
      v = 1UL;
  }

  return ae;
}

int main() {
  int ap = 0;
  fn13();
  fn9(v, "g_170", ap);
  fn1(p, ap);
  return 0;
}