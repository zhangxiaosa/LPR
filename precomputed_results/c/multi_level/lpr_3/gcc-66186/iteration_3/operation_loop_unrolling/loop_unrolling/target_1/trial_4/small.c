#include <stdint.h>

int g;
int h;

unsigned fn4(int p1, uint16_t p2, uint16_t p3, unsigned p4) {
  int16_t ak[8];
  
  for (; g <= 7; g += 1) {
    // Unrolled loop iteration 0
    if (h < 0) {
      if (ak[p3])
        break;
    }
    p4 += 1;

    // Unrolled loop iteration 1
    if (h < 0) {
      if (ak[p3])
        break;
    }
    p4 += 1;

    // Unrolled loop iteration 2
    if (h < 0) {
      if (ak[p3])
        break;
    }
    p4 += 1;

    // Unrolled loop iteration 3
    if (h < 0) {
      if (ak[p3])
        break;
    }
    p4 += 1;

    // Unrolled loop iteration 4
    if (h < 0) {
      if (ak[p3])
        break;
    }
    p4 += 1;

    // Unrolled loop iteration 5
    if (h < 0) {
      if (ak[p3])
        break;
    }
    p4 += 1;

    // Unrolled loop iteration 6
    if (h < 0) {
      if (ak[p3])
        break;
    }
    p4 += 1;

    // Unrolled loop iteration 7
    if (h < 0) {
      if (ak[p3])
        break;
    }
    p4 += 1;
  }

  return g;
}

int main() {
  if (fn4(g, g, 0x57638FF4, g))
    ;
}