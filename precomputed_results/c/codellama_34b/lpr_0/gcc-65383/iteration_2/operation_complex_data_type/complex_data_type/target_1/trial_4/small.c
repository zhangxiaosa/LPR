
#include <stdint.h>

int32_t g_hi;
int32_t g_lo;
int16_t h2_0_hi;
int16_t h2_0_lo;

int32_t fn2() {
  for (;;) {
    int32_t r[5];
    if (h2_0_hi)
      return 0x92A1;
    g_hi = r[0x06D7];
    g_lo = r[0x06D7];
  }
}

int main() { fn2(); }
