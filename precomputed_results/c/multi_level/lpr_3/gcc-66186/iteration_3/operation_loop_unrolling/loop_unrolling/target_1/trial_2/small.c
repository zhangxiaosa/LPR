#include <stdint.h>

int g;
int h;

unsigned fn4(int p1, uint16_t p2, uint16_t p3, unsigned p4) {
  int16_t ak[8];

  for (; g <= 7; g += 1) {
    if (h < 0) {
      if (ak[p3])
        break;
      if (ak[p3 + 1])
        break;
      if (ak[p3 + 2])
        break;
      if (ak[p3 + 3])
        break;
      if (ak[p3 + 4])
        break;
      if (ak[p3 + 5])
        break;
      if (ak[p3 + 6])
        break;
      if (ak[p3 + 7])
        break;
    }
  }

  return g;
}

int main() {
  if (fn4(g, g, 0x57638FF4, g)) {
    // Do something
  }

  return 0;
}