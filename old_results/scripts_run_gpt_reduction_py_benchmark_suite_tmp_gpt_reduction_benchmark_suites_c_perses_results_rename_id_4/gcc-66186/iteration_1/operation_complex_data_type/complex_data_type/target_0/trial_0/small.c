#include <iostream>

int g;
int h;
short ak0, ak1, ak2, ak3, ak4, ak5, ak6, ak7;
unsigned temp_p2;
unsigned temp_p4;

unsigned fn4(unsigned p2, unsigned short p3, unsigned p4) {
  temp_p2 = 0;
  temp_p4 = 0;
  for (temp_p2 = 0; temp_p2 <= 7; temp_p2 += 1) {
    for (temp_p4 = 0; temp_p4 <= 1; temp_p4 += 1) {
      if (h < 0) {
        for (temp_p4 = 0; temp_p4 <= 1; temp_p4 += 1) {
          if (p3 < 8) {
            switch (p3) {
              case 0: ak0 = ak[p3]; break;
              case 1: ak1 = ak[p3]; break;
              case 2: ak2 = ak[p3]; break;
              case 3: ak3 = ak[p3]; break;
              case 4: ak4 = ak[p3]; break;
              case 5: ak5 = ak[p3]; break;
              case 6: ak6 = ak[p3]; break;
              case 7: ak7 = ak[p3]; break;
            }
            break;
          }
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