
#include <stdio.h>

uint32_t fn2(uint32_t p1, int16_t p2) { return p1 - p2; }

uint32_t fn6(uint32_t p1, int16_t p2) { return p2; }

uint32_t v;
int16_t w;
int16_t ac = 1;
uint32_t fn10(uint32_t p1, int16_t p2) {
  uint32_t an = 250;
  p2 = ac || (an = w) == 0x294A85636008822D;
  int16_t ao = 0xBCD1;
  v = fn2(ao - (fn6(1, an) & 1) << 8, p2) & 1;
  return v;
}

uint32_t fn13() {
  fn10(v, 0);
  return 1;
}

int main() {
  fn13();
  printf("checksum = %X\n", v);
  return 0;
}
