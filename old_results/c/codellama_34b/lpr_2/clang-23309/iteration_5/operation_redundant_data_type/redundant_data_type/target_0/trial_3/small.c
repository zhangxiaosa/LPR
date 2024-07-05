
#include <stdio.h>
#include <stdint.h>

int fn2(int p1, int p2) {
  return p1 - p2;
}

int main() {
  uint16_t an = 0x294A;
  uint16_t t = an;
  uint16_t ao = 0xBCD1;
  int temp = ao - (1 - an);
  int v_int = fn2(temp, t) & 1;
  printf("checksum = %d\n", v_int);
  return 0;
}
