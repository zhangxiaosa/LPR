
#include <stdint.h>

int32_t g_hi = 0;
int32_t g_lo = 0;

int16_t h2_0 = 0x92A1;

int32_t fn2() {
  for (;;) {
    int32_t r[5];
    if (h2_0)
      return 0x92A1;
    g_hi = r[0x06D7];
    g_lo = r[0x06D8];
  }
}

int main() {
  fn2();
  return 0;
}
