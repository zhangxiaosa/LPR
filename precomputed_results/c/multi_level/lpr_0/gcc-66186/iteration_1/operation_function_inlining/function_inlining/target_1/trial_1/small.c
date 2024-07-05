#include <stdio.h>

int g;

unsigned short fn2(int p1, unsigned short p2, unsigned p3) {
  if (fn4(4294967289L, 4294967287UL, 4294967289L, g, p3))
    ;
  return 0;
}

short fn3(int p1, int p2, int p3, unsigned short p4, int p5) {
  if (fn4(4294967289L, 4294967287UL, 4294967289L, g, p5))
    ;
  return 0xA3L;
}

unsigned fn4(int p1, unsigned short p2, unsigned short p3, unsigned p4,
             unsigned short p5) {
  short ak[8];
  for (p2 = 0; p2 <= 7; p2 += 1)
    for (p4 = 0; p4 <= 7; p4 += 1)
      if (g < 0)
        for (p4 = 0; p4 <= 7; p4 += 1)
          if (ak[p3])
            break;
  return g;
}

int fn5() {
  if (fn4(4294967289L, 4294967287UL, 4294967289L, g, g))
    ;
  return 0;
}

int main() {
  fn5();
}