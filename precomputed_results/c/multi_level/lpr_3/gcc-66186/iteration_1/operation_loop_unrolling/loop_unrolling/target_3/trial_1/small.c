#include <stdint.h>

int g;
int h;
unsigned fn4(int, uint16_t, uint16_t, unsigned, uint16_t);

int fn5() {
  int32_t p3 = 0x57638FF4;
  if (fn4(0x9A5D, g, p3, g, g))
    ;

  return 0xA3;
}

unsigned fn4(int p1, uint16_t p2, uint16_t p3, unsigned p4, uint16_t p5) {
  int16_t ak[8];

  for (; p2 <= 7; p2 += 1) {
    // Unrolled first iteration
    if (h < 0) {
      if (ak[p3])
        break;
    }

    // Unrolled second iteration
    p4 += 1;
    if (h < 0) {
      if (ak[p3])
        break;
    }

    // Unrolled third iteration
    p4 += 1;
    if (h < 0) {
      if (ak[p3])
        break;
    }

    // Unrolled fourth iteration
    p4 += 1;
    if (h < 0) {
      if (ak[p3])
        break;
    }

    // Unrolled fifth iteration
    p4 += 1;
    if (h < 0) {
      if (ak[p3])
        break;
    }

    // Unrolled sixth iteration
    p4 += 1;
    if (h < 0) {
      if (ak[p3])
        break;
    }

    // Unrolled seventh iteration
    p4 += 1;
    if (h < 0) {
      if (ak[p3])
        break;
    }

    // Unrolled eighth iteration
    p4 += 1;
    if (h < 0) {
      if (ak[p3])
        break;
    }
  }

  return g;
}

int main() {
  fn5();
}