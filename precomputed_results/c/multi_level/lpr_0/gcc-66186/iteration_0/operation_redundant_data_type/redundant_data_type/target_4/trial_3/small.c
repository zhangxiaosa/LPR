#include <stdio.h>

int g;
int h;

int fn1(unsigned, unsigned, unsigned);
unsigned fn2(int, unsigned, unsigned);
short fn3(int, int, int, unsigned, int);
unsigned fn4(int, unsigned, unsigned, unsigned, unsigned);

int fn5() {
  int n = 1L;
  int o = 0x5A683F60L;
  fn1(n, g, g);
  return o;
}

int fn1(unsigned p1, unsigned p2, unsigned p3) {
  int s = 0x57638FF4L;
  int t = 1L;
  fn2(g, s, g);
  return t;
}

unsigned fn2(int p1, unsigned p2, unsigned p3) {
  unsigned u = 0x30A04A8FL;
  if (fn3(0x9A5DL, g, p2, u, p1))
    ;
  return 0;
}

short fn3(int p1, int p2, int p3, unsigned p4, int p5) {
  int ad = -7L;
  int ae = 0xA3L;
  if (fn4(ad, 4294967287UL, ad, g, p5))
    ;
  return ae;
}

unsigned fn4(int p1, unsigned p2, unsigned p3, unsigned p4,
             unsigned p5) {
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
