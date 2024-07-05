#include <stdint.h>

struct i {
  int32_t j;
  int32_t l;
};

int fn1(uint8_t p1, int32_t p2) {
  return p1 ? p1 : p2;
}

int fn3() {
  struct i v = {0x15L};
  int32_t w;

  for (; w; w += 1)
    for (uint32_t s = 0; s <= 39; ++s)
      for (v.j = 0; v.j <= 2; v.j += 1) {
        v.l = v.j;
        w = fn1(v.l, 2);
      }

  return 0;
}
