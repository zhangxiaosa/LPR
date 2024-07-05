#include <stdio.h>

int g;

unsigned short fn2(int p1, unsigned short p2, unsigned p3);

int fn5() {
  short ak[8];

  for (unsigned short p2 = 0; p2 <= 7; p2 += 1) {
    for (unsigned p4 = 0; p4 <= 7; p4 += 1) {
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
