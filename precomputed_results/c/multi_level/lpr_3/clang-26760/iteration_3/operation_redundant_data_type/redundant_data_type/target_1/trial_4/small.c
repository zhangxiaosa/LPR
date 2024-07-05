#include <stdint.h>

uint32_t f;
uint32_t g;

int main() {
  uint32_t i;
  uint32_t j = 0x24F96B7B;
  uint32_t k;

  for (f = 0;)
    --j;

  uint32_t m = j;
  uint32_t n = g;
  uint32_t p;
q:
  k = k >> m;
  i = (uint32_t)p;

  if (i) {
    k = k << m;
    goto q;
  }
}
