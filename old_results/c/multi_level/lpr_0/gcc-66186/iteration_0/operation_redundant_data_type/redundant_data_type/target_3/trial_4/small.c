#include <stdio.h>

int g;
int h;

int fn1(unsigned, unsigned, unsigned);
unsigned fn2(int, unsigned, unsigned);
short fn3(int, int, int, unsigned, int);
unsigned fn4(int, unsigned, unsigned, unsigned, unsigned);

int fn5() {
  unsigned n = 1L;
  unsigned o = 0x5A683F60UL;
  fn1(n, g, g);
  return o;
}

int fn1(unsigned p1, unsigned p2, unsigned p3) {
  unsigned s = 0x57638FF4UL;
  int t = 1L;
  fn2(g, (unsigned)s, g);
  return t;
}

unsigned fn2(int p1, unsigned p2, unsigned p3) {
  unsigned u = 0x30A04A8FUL;
  if (fn3(0x9A5D, g, (int)p2, u, p1))
    ;
  return 0;
}

short fn3(int p1, int p2, int p3, unsigned p4, int p5) {
  unsigned ad = -7UL;
  short ae = 0xA3;
  if (fn4((int)ad, 4294967287UL, (unsigned)ad, g, p5))
    ;
  return ae;
}

unsigned fn4(int p1, unsigned p2, unsigned p3, unsigned p4,
             unsigned p5) {
  for (unsigned p2 = 0; p2 <= 7; p2 += 1)
    for (unsigned p4 = 0; p4 <= 7; p4 += 1)
      ;
  return (unsigned)g;
}