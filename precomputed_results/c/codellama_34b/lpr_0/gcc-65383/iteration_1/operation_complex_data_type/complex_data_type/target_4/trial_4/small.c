c
#include <stdint.h>

uint32_t g;
uint32_t h2_0 = 0x92A1D2CD;
uint32_t h2_1 = 0xC3;

uint32_t fn2() {
  return h2_1;
}

int main() {
  printf("The result of fn2 is: %u\n", fn2());
  return 0;
}
