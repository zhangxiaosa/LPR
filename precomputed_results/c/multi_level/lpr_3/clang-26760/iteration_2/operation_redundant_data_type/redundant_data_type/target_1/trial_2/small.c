#include <stdint.h>

typedef int32_t a;
typedef int32_t c;
uint32_t f;
a g;

int main() {
  a i;
  c j = 0x24F96B7B;
  uint32_t k;
  for (f = 0;) --j;
  c l = 1;
  c m = j;
  a n = g;
  c o = n;
  uint32_t p = o;
q:
  k = k >> static_cast<uint32_t>(l);
  i = p;
  if (i) {
    k = k << static_cast<uint32_t>(m);
    goto q;
  }
}