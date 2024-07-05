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
  return g;
}

int main() {
  fn5();
}
