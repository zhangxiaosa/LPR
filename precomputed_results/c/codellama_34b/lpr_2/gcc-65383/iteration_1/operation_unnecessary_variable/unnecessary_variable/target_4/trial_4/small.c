
#include <stdint.h>
uint32_t g;
uint32_t h2 = 0x92A1D2CD;
uint32_t fn2() {
  for (;;) {
    uint32_t q_real = 0xC3;
    if (h2)
      return q_real;
    g = 0;
  }
}
int main() { uint32_t q_real = fn2(); }
