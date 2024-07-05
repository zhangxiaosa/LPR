
#include <stdint.h>

uint32_t g;
uint16_t h2_0 = 0x92A1;

uint32_t fn2(uint32_t r[5]) {
  for (;;) {
    if (h2_0)
      return 0x92A1;
    g = r[0x06D7];
  }
}

int main() {
  uint32_t r[5] = {0};
  fn2(r);
  return 0;
}
