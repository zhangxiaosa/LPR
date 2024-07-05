
#include <stdint.h>

uint32_t f;
int16_t fn1() {
  int8_t i;
  int32_t k = 0x24F96B7BL;
  for (f = 0; f;) {
    k -= 8;
    i = k;
  }
  if (i) {
    k = k << k;
  }
}

int main() {}
