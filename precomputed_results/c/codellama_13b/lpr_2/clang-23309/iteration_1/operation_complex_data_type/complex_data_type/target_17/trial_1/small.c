
#include <stdio.h>
#include <stdlib.h>

// short p;
short p;

// short t;
short t;

// short ac = 1L;
short ac = 1L;

// short fn10(g, short);
short fn10(int, short);

// short fn12(short, short, short, short, g);
short fn12(short, short, short, short, int);

// short fn13() {
int fn13() {
  // short ae = 1UL;
  short ae = 1UL;
  fn10(v, t);
  return ae;
}

// short fn10(g p1, short p2) {
short fn10(int p1, short p2) {
  // short af = 0x2F2F6D26L;
  short af = 0x2F2F6D26L;
  // short ag = 248UL;
  short ag = 248UL;
  fn12(2L, ag, p2, 1, p1);
  return af;
}

// short fn12(short p1, short p2, short p3, short p4, g p5) {
short fn12(short p1, short p2, short p3, short p4, int p5) {
  // short al = 3L;
  short al = 3L;
  // c am = 1L;
  int am = 1L;
  // short an;
  short an;
  // for (w = 3; w; w -= 1)
  for (w = 3; w; w -= 1)
    // if (an = 250UL) {
    if (an = 250UL) {
      // p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
      p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
      // short ao = 0xBCD1L;
      short ao = 0xBCD1L;
      // if (fn2(fn3(ao, fn4(fn6(am, an), 0xECL)), p2) & 1UL)
      if (fn2(fn3(ao, fn4(fn6(am, an), 0xECL)), p2) & 1UL)
        v = 1UL;
    }
  return al;
}

// int main() {
int main() {
  // fn13();
  fn13();
  // p = v;
  p = v;
  // printf("checksum = %X\n", p);
  printf("checksum = %X\n", p);
  // return 0;
  return 0;
}
