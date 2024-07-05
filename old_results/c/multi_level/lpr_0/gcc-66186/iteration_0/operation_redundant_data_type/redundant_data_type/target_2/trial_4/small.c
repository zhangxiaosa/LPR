#include <stdio.h>

unsigned int g;
unsigned int h;

unsigned int fn1(unsigned short, unsigned int, unsigned short);
unsigned short fn2(unsigned int, unsigned short, unsigned int);
short fn3(unsigned int, unsigned int, unsigned int, unsigned short, unsigned int);
unsigned int fn4(unsigned int, unsigned short, unsigned short, unsigned int,
                 unsigned short);

unsigned int fn5() {
  unsigned int n = 1L;
  unsigned int o = 0x5A683F60L;
  fn1(n, g, g);
  return o;
}

unsigned int fn1(unsigned short p1, unsigned int p2, unsigned short p3) {
  unsigned int s = 0x57638FF4L;
  unsigned int t = 1L;
  fn2(g, s, g);
  return t;
}

unsigned short fn2(unsigned int p1, unsigned short p2, unsigned int p3) {
  unsigned int u = 0x30A04A8FL;
  if (fn3(0x9A5DL, g, p2, u, p1))
    ;
  return 0;
}

short fn3(unsigned int p1, unsigned int p2, unsigned int p3,
          unsigned short p4, unsigned int p5) {
  unsigned int ad = -7L;
  unsigned int ae = 0xA3L;
  if (fn4(ad, 4294967287UL, ad, g, p5))
    ;
  return ae;
}

unsigned int fn4(unsigned int p1, unsigned short p2, unsigned short p3,
                 unsigned int p4, unsigned short p5) {
  short ak[8];
  for (p2 = 0; p2 <= 7; p2 += 1)
    for (p4 = 0; p4 <= 7; p4 += 1)
      if (h < 0)
        for (p4 = 0; p4 <= 7; p4 += 1)
          if (ak[p3])
            break;
  return g;
}

int main() { fn5(); }
