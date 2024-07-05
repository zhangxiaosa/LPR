#include <stdint.h>

int g;
int h;

unsigned fn4(uint16_t p2, uint16_t p3, unsigned p4, uint16_t p5);

int fn5() {
  int32_t p3 = 0x57638FF4;
  if (fn4(0x9A5D, g, p3, g, g))
    ;
  return 0xA3;
}

unsigned fn4(uint16_t p2, uint16_t p3, unsigned p4, uint16_t p5) {
  int16_t ak[8];
  for (; p2 <= 7; p2 += 1)
    for (p4 = 0; p4 <= 7; p4 += 1)
      if (h < 0)
        for (p4 = 0; p4 <= 7; p4 += 1)
          if (ak[p3])
            break;
  // void return type (optional)
  return;
}

int main() {
  fn5();
}