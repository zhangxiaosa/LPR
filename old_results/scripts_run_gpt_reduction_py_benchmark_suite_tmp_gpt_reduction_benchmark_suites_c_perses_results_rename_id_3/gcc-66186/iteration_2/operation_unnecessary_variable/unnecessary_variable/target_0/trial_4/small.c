#include <stdint.h>

unsigned fn4(int p1, uint16_t p2, uint16_t p3, unsigned p4) {
  return 0;
}

int main() {
  int32_t p3 = 0x57638FF4;
  if (fn4(0x9A5D, 0, p3, 0))
    ;
}
