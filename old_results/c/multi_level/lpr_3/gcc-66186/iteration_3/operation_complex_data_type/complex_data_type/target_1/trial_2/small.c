#include <stdint.h>

int g;
int h;

unsigned fn4(int p1, uint16_t p2, uint16_t p3, unsigned p4) {
  int ak[8];
  for (; g <= 7; g += 1) {
    for (p4 = 0; p4 <= 7; p4 += 1) {
      if (h < 0) {
        for (p4 = 0; p4 <= 7; p4 += 1) {
          if (ak[p3]) {
            break;
          }
        }
      }
    }
  }
  return g;
}

int main() {
  int p1 = g;
  uint16_t p2 = g;
  uint16_t p3 = 0x57638FF4;
  unsigned p4 = g;

  if (fn4(p1, p2, p3, p4)) {
    // Do something
  }

  return 0;
}