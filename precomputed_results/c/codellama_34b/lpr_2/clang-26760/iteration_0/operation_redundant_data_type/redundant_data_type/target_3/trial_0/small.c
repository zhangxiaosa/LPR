
#include <stdint.h>

typedef uint32_t a;
typedef uint32_t b;
typedef uint32_t d;
typedef uint32_t e;

d f;

b fn1() {
  a i;
  int32_t j = 0x24F96B7BL;
  e k;
  for (f = 0; f;) {
    j -= 8;
    i = j;
  }
  int32_t l = 1L;
  int32_t m = j;
q:;
  k = k >> l;
  if (i) {
    k = k << m;
    goto q;
  }
}

int main() {}
