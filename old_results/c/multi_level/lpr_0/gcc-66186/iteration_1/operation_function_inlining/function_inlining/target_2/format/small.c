#include <stdio.h>

int g;

unsigned short fn2(int p1, unsigned short p2, unsigned p3);
unsigned fn4(int p1, unsigned short p2, unsigned short p3, unsigned p4,
             unsigned short p5);

int fn5() {
  if (fn4(4294967289L, 4294967287UL, 4294967289L, g, 0x30A04A8FL))
    ;
  return 0xA3L;
}

unsigned fn4(int p1, unsigned short p2, unsigned short p3, unsigned p4,
             unsigned short p5) {
  short ak[8];
  
  for (p2 = 0; p2 <= 7; p2 += 1) {
    for (p4 = 0; p4 <= 7; p4 += 1) {
      if (g < 0) {
        for (p4 = 0; p4 <= 7; p4 += 1) {
          if (ak[p3]) {
            break;
          }
        }
      }
    }
  }
  
  return g;
}

int main() {
  fn5();
}