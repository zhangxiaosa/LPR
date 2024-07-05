#include <stdio.h>

int g;
int h;

unsigned fn4(unsigned p2, unsigned short p3, unsigned p4) {
  short ak0, ak1, ak2, ak3, ak4, ak5, ak6, ak7; // Decomposed variables for ak

  unsigned temp_p2;
  unsigned temp_p4;

  for (temp_p2 = 0; temp_p2 <= 7; temp_p2 += 1) {
    for (temp_p4 = 0; temp_p4 <= 1; temp_p4 += 1) {
      if (h < 0) {
        for (temp_p4 = 0; temp_p4 <= 1; temp_p4 += 1) {
          if (ak0 || ak1 || ak2 || ak3 || ak4 || ak5 || ak6 || ak7)
            break;
        }
      }
    }
  }

  return g;
}

int fn5() {
  if (fn4(4294967287UL, -7L, g))
    ;

  return g;
}

int main() {
  fn5();
}
