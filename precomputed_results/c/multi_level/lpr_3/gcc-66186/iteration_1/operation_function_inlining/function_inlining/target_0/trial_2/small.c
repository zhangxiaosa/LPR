#include <stdint.h>

int g;
int h;
int fn5() {
  int32_t p3 = 0x57638FF4;
  int16_t ak[8];
  for (uint16_t p2 = g; p2 <= 7; p2 += 1) {
    for (unsigned p4 = g; p4 <= 7; p4 += 1) {
      if (h < 0) {
        for (p4 = g; p4 <= 7; p4 += 1) {
          if (ak[p3])
            break;
        }
      }
    }
  }
  return 0xA3;
}

int main() {
  fn5();
}