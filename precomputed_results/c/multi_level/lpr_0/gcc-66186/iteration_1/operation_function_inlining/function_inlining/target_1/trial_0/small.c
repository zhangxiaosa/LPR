#include <stdio.h>

int g;

short fn3(int p1, int p2, int p3, unsigned short p4, int p5);
unsigned fn4(int p1, unsigned short p2, unsigned short p3, unsigned p4, unsigned short p5);

int fn5() {
  if (fn3(0x9A5DL, g, 0x57638FF4L, 0x30A04A8FL, g))
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
  return g;
}

int main() {
  fn5();
}