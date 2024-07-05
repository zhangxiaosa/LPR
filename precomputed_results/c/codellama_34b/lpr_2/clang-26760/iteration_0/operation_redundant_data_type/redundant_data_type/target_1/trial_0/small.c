
#include <stdint.h>

typedef int8_t a;
typedef int16_t b;
typedef int32_t c;
typedef uint32_t d;
typedef uint32_t e;

d f;

b fn1() {
  a i;
  c j = 0x24F96B7BL;
  e k;
  for (f = 0; f;) {
    j -= 8;
    i = j;
  }
  c l = 1L;
  c m = j;
q:;
  k = k >> l;
  if (i) {
    k = k << m;
    goto q;
  }
}

int main() {
  fn1();
  return 0;
}
