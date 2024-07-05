#include <stdint.h>

uint32_t m0[4];

int32_t n0_j;
int32_t n0_l;
int32_t n1_j;
int32_t n1_l;

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
        n0_j = v.j;
        n0_l = v.l;
        n[0] = v;
        v.l = m0[v.j];
        w = fn1(n0_l);
        for (; a; a -= 4)
          n[0] = v;
      }
  return 0;
}