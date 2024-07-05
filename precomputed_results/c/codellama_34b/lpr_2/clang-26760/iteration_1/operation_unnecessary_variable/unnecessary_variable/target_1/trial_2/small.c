
#include <stdint.h>
int16_t fn1() {
  uint32_t k;
  for (uint32_t f; f;)
    k = k >> 1L;
  if (k)
    k = k << 8;
}
int main() {}
