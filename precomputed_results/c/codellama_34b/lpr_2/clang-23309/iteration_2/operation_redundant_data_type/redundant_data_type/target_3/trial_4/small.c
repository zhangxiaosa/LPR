
#include <stdint.h>

int fn2(uint32_t p1, uint32_t p2) {
  return p1 - p2;
}

uint8_t fn4(uint32_t p1, uint32_t p2) {
  return p1;
}

int main() {
  uint8_t al = 3;
  uint16_t an;
  for (uint16_t w = 3; w; w -= 1) {
    an = 250;
    if (fn2(an - fn4(1 - an, 0xECL), an == 0x294A85636008822D) & 1)
      al = 1;
  }
  printf("checksum = %d\n", al);
  return 0;
}
