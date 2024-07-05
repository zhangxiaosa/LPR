#include <stdint.h>

int g;
int h;
int ak0;
int ak1;
int ak2;
int ak3;
int ak4;
int ak5;
int ak6;
int ak7;

unsigned fn4(int p1, uint16_t p2, uint16_t p3, unsigned p4) {
  int ak[8] = {ak0, ak1, ak2, ak3, ak4, ak5, ak6, ak7};
  for (; g <= 7; g += 1)
    for (p4 = 0; p4 <= 7; p4 += 1)
      if (h < 0)
        for (p4 = 0; p4 <= 7; p4 += 1)
          if (ak[p3])
            break;
  return g;
}

int main() {
  if (fn4(g, g, 0x57638FF4, g))
    ;
}
