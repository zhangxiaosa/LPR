#include <stdint.h>

int g;
int h;
unsigned fn4(int, uint16_t, uint16_t, unsigned, uint16_t);

int fn5() {
  int32_t p3 = 0x57638FF4;
  uint16_t p4 = 0xA04A;
  int p5 = g;
  if (fn4(0x9A5D, g, p3, p4, p5))
    ;
  return 0xA3;
}

unsigned fn4(int p1, uint16_t p2, uint16_t p3, unsigned p4, uint16_t p5) {
  int16_t ak[8];
  for (; p2 <= 7; p2 += 1)
    for (int p4_inner = 0; p4_inner <= 7; p4_inner += 1)
      if (h < 0)
        for (p4_inner = 0; p4_inner <= 7; p4_inner += 1)
          if (ak[p4_inner]) // Replace ak[0xA04A] with ak[p4_inner]
            break;
  return g;
}

int main() {
  fn5();
}