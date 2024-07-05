
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

uint16_t an;
uint16_t ao;
uint16_t t;
uint16_t temp;
uint16_t v_int;

int main() {
  an = 0x294A;
  ao = 0xBCD1;
  t = 1;
  temp = ao - (1 - an);
  v_int = temp - t & 1;
  printf("checksum = %d\n", v_int);
  return 0;
}
