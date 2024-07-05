#include <stdint.h>

uint32_t m0[4];

struct i {
  int32_t j;
  int32_t l;
};

struct i n0;
struct i n1;

int main() {}

int fn1(uint8_t p1) { return p1 ? p1 : 0; }

int fn3() {
  uint32_t s;
  struct i v = {0x15L};
  int32_t w;
  int32_t a;
  for (; w; w += 1)
    for (s = 0; s <= 39; ++s)
      for (v.j = 0; v.j <= 2; v.j += 1) {
        if (n0.j == 0 && n1.j == 0) {
          n0 = v;
          n1 = v;
        }
        n0.l = m0[n0.j];
        n1.l = m0[n1.j];
        w = fn1(n0.l);
        for (; a; a -= 4) {
          n0 = v;
          n1 = v;
        }
      }
  return 0;
}