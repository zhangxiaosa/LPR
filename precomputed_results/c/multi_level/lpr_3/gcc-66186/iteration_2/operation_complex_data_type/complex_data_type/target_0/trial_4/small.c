#include <stdint.h>

int g;
int h;

int16_t ak_0;
int16_t ak_1;
int16_t ak_2;
int16_t ak_3;
int16_t ak_4;
int16_t ak_5;
int16_t ak_6;
int16_t ak_7;

unsigned fn4(int p1, uint16_t p2, uint16_t p3, unsigned p4) {
  ak_0 = 0;
  ak_1 = 0;
  ak_2 = 0;
  ak_3 = 0;
  ak_4 = 0;
  ak_5 = 0;
  ak_6 = 0;
  ak_7 = 0;

  for (; g <= 7; g += 1) {
    for (p4 = 0; p4 <= 7; p4 += 1) {
      if (h < 0) {
        for (p4 = 0; p4 <= 7; p4 += 1) {
          if (p3 == 0) {
            break;
          }
        }
      }
    }
  }

  return g;
}

int main() {
  int32_t p3 = 0x57638FF4;

  if (fn4(0x9A5D, g, p3, g)) {
    // Do something
  }

  return 0;
}