#include <stdint.h>

typedef int32_t a;
typedef int32_t c;
typedef uint32_t d;
typedef uint32_t e;

d f;
a g;

int main() {
  a i;
  c j = 0x24F96B7B;
  e k;

  for (f = 0; f;) {
    --j;
  }

  c l = 1;
  c m = j;
  a n = g;
  c o = n;

  uint32_t p_low;
  uint32_t p_high;

  p_low = o;
  p_high = k;

q:
  k = k >> l;
  i = (p_high << 32) | p_low;

  if (i) {
    k = k << m;
    goto q;
  }

  return 0;
}