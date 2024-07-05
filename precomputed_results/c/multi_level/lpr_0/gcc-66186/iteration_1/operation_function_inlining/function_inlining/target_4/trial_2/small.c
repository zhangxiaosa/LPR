#include <stdio.h>

int g;

int fn5() {
  unsigned short p2 = 4294967287UL;
  unsigned short p3 = 4294967289L;
  unsigned p4 = g;

  for (p2 = 0; p2 <= 7; p2 += 1) {
    for (p4 = 0; p4 <= 7; p4 += 1) {
      if (g < 0) {
        for (p4 = 0; p4 <= 7; p4 += 1) {
          if (g < 0) {
            unsigned short p1 = p4;
            unsigned short p2 = p2;
            unsigned p3 = p3;

            unsigned short t1 = p1;
            unsigned short t2 = p2;
            unsigned t3 = p3;

            unsigned t4 = t3 + t1;
            unsigned t5 = t4 ^ t2;
            unsigned short t6 = t5 + t1;
            unsigned t7 = t5 & t6;
            unsigned t8 = t7 * t4;
            unsigned short t9 = t6 ^ t8;
            unsigned t10 = t9 + t3;
            unsigned t11 = t10 - t5;
            unsigned t12 = t11 ^ t8;
            unsigned t13 = t11 + t12;
            unsigned t14 = t10 ^ t13;

            p4 = t14;
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