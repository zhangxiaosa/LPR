#include <stdint.h>

int g;
int h;

int16_t ak0;
int16_t ak1;
int16_t ak2;
int16_t ak3;
int16_t ak4;
int16_t ak5;
int16_t ak6;
int16_t ak7;

unsigned fn4(int p1, uint16_t p2, uint16_t p3, unsigned p4) {
  ak0 = ak[0];
  ak1 = ak[1];
  ak2 = ak[2];
  ak3 = ak[3];
  ak4 = ak[4];
  ak5 = ak[5];
  ak6 = ak[6];
  ak7 = ak[7];
  
  for (; g <= 7; g += 1) {
    for (p4 = 0; p4 <= 7; p4 += 1) {
      if (h < 0) {
        for (p4 = 0; p4 <= 7; p4 += 1) {
          if (ak[p3])
            break;
          }
        }
      }
    }
  return g;
}

int main() {
  int32_t p3 = 0x57638FF4;
  if (fn4(0x9A5D, g, p3, g))
    ;
}