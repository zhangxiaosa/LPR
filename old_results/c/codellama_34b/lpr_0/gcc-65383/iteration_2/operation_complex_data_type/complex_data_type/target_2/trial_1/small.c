
#include <stdint.h>

int32_t g;
int16_t h2_0 = 0x92A1;

int32_t r0 = 0x06D7;
int32_t r1 = 0x06D8;
int32_t r2 = 0x06D9;
int32_t r3 = 0x06DA;
int32_t r4 = 0x06DB;

int32_t fn2() {
  for (;;) {
    if (h2_0)
      return 0x92A1;
    g = r0;
  }
}

int main() { fn2(); }
