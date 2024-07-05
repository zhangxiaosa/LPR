c
#include <stdio.h>

int main() {
  short a;
  int b;
  long c;
  unsigned char d;
  short e;
  unsigned g;

  // fn2(int p1, int p2) { return p1 - p2; }
  int fn2(int p1, int p2) {
    return p1 - p2;
  }

  // fn3(c p1, c p2) { return p1 - p2; }
  long fn3(long p1, long p2) {
    return p1 - p2;
  }

  // fn4(d p1, d p2) { return p1; }
  unsigned char fn4(unsigned char p1, unsigned char p2) {
    return p1;
  }

  // fn5(e p1, e p2) { return p2; }
  short fn5(short p1, short p2) {
    return p2;
  }

  // fn6(e p1, e p2) { return p1 - p2; }
  short fn6(short p1, short p2) {
    return p1 - p2;
  }

  // p;
  long p;

  // fn9(g p1, char *p2, int p3) { p = p1; }
  void fn9(unsigned p1, char* p2, int p3) {
    p = p1;
  }

  // int t;
  int t;

  // e u;
  short u;

  // c v;
  long v;

  // a w;
  short w;

  // e ab;
  short ab;

  // a ac = 1L;
  long ac = 1L;

  // d fn10(int, short);
  unsigned char fn10(int, short);

  // d fn11(d, e, b, short);
  unsigned char fn11(unsigned char, short, int, short);

  // a fn12(b, b, unsigned char, a, g);
  short fn12(int, int, unsigned char, short, unsigned);

  // int fn13() {
  int fn13() {
    short ae = 1UL;
    fn10(u, t);
    return ae;
  }

  // d fn10(int p1, short p2) {
  unsigned char fn10(int p1, short p2) {
    int af = 0x2F2F6D26L;
    unsigned char ag = 248UL;
    fn11(2L, ag, p2, 1);
    return af;
  }

  // d fn11(d p1, e p2, b p3, short p4) {
  unsigned char fn11(unsigned char p1, short p2, int p3, short p4) {
    long ai = 7L;
    short aj = 1UL;
    fn12(ai, ai, p1, 0, p1);
    return aj;
  }

  // a fn12(b p1, b p2, unsigned char p3, a p4, g p5) {
  short fn12(int p1, int p2, unsigned char p3, short p4, unsigned p5) {
    int al = 3L;
    long am = 1L;
    int an;
    for (w = 3; w; w -= 1) {
      an = 250UL;
      p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
      short ao = 0xBCD1L;
      if (fn2(fn3(ao, fn4(fn6(am, an), 0xECL)), p2) & 1UL)
        v = 1UL;
    }
    return al;
  }

  int ap = 0;
  fn13();
  fn9(v, "g_170", ap);
  printf("checksum = %X\n", p);

  return 0;
}
