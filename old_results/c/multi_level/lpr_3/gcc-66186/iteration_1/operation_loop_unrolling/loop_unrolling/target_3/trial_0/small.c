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
  if (h < 0) {
    for (p4 = 0; p4 <= 7; p4 += 1) {
      if (ak[p3]) {
        // The loop is terminated when ak[p3] is non-zero.
      }
    }
    for (p4 = 0; p4 <= 7; p4 += 1) {
      if (ak[p3]) {
        // Unrolled loop iteration 1
      }
    }
    for (p4 = 0; p4 <= 7; p4 += 1) {
      if (ak[p3]) {
        // Unrolled loop iteration 2
      }
    }
    for (p4 = 0; p4 <= 7; p4 += 1) {
      if (ak[p3]) {
        // Unrolled loop iteration 3
      }
    }
    for (p4 = 0; p4 <= 7; p4 += 1) {
      if (ak[p3]) {
        // Unrolled loop iteration 4
      }
    }
    for (p4 = 0; p4 <= 7; p4 += 1) {
      if (ak[p3]) {
        // Unrolled loop iteration 5
      }
    }
    for (p4 = 0; p4 <= 7; p4 += 1) {
      if (ak[p3]) {
        // Unrolled loop iteration 6
      }
    }
    for (p4 = 0; p4 <= 7; p4 += 1) {
      if (ak[p3]) {
        // Unrolled loop iteration 7
      }
    }
    for (p4 = 0; p4 <= 7; p4 += 1) {
      if (ak[p3]) {
        // Unrolled loop iteration 8
      }
    }
  }
  return g;
}
int main() {
  fn5();
}