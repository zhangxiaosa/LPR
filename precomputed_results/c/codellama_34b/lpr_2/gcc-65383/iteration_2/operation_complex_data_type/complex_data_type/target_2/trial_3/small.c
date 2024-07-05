
#include <stdint.h>

uint32_t real_value;
uint32_t real_value_2 = 0x92A1D2CD;
uint32_t real_value_3 = 0xC3;
uint32_t real_value_4[5][9][5];

uint32_t fn2() {
  if (!real_value_2)
    return real_value_3;
  real_value = real_value_4[0x06D7][0x06D7][0x06D7];
  return real_value;
}

int main() {
  uint32_t real_value = fn2();
  return 0;
}
