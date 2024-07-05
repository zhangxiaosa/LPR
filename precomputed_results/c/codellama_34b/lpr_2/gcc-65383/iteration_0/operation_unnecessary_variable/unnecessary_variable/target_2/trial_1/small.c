
#include <stdint.h>
typedef uint32_t b;
b g;
b h[] = {0x92A1D2CDL, 0x92A1D2CDL, 0x92A1D2CDL};
uint32_t fn2() {
  for (;;) {
    if (h[2])
      return 0xC3L;
    g = h[0x06D7L][0x06D7L][0x06D7L];
  }
}
int main() { uint32_t q_real = fn2(); }
