
#include <stdint.h>

int32_t g_low = 0;
int32_t g_high = 0;
int32_t g_high2 = 0;
int32_t g_high3 = 0;
int8_t h2_0_low = 0xA1;
int8_t h2_0_high = 0x92;

int32_t fn2() {
  for (;;) {
    int32_t r0 = 0;
    int32_t r1 = 0;
    int32_t r2 = 0;
    int32_t r3 = 0;
    int32_t r4 = 0;

    if (h2_0_low)
      return 0x92A1;
    g_low = r0;
  }
}

int main() { fn2(); }
