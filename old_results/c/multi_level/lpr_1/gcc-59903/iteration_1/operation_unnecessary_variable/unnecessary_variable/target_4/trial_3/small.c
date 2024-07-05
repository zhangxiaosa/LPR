#include <stdint.h>

uint32_t m0[4];

struct i {
  int32_t j;
  int32_t l;
};

struct i n[2];

int main() {}

int fn1(uint8_t p1) { return p1 ? p1 : 0; }

int fn3() {
  uint32_t s;
  int32_t w;
  int32_t a;
  for (; w; w += 1)
    for (s = 0; s <= 39; ++s)
      for (struct i tmp = {0x15L}; tmp.j <= 2; tmp.j += 1) {
        n[0] = tmp;
        tmp.l = m0[tmp.j];
        w = fn1(n[0].l);
        for (; a; a -= 4)
          n[0] = tmp;
      }
  return 0;
}
