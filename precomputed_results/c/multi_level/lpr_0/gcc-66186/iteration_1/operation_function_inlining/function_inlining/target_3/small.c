#include <stdio.h>

int g;

unsigned short fn2(int p1, unsigned short p2, unsigned p3);

int fn5() {
  short ak[8];

  unsigned short p2 = 4294967287UL;
  unsigned short p3 = 4294967289L;
  unsigned p4 = g;
  unsigned short p5 = 0x30A04A8FL;

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

int main() { fn5(); }
