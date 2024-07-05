#include <stdint.h>

uint32_t m0[4];

int32_t n_0_j;
int32_t n_0_l;

int main() {}

int fn1(uint8_t p1) { return p1 ? p1 : 0; }

int fn3() {
  uint32_t s;
  int32_t v_j = 0x15L;
  int32_t w;
  int32_t a;
  for (; w; w += 1)
    for (s = 0; s <= 39; ++s)
      for (v_j = 0; v_j <= 2; v_j += 1) {
        n_0_j = v_j;
        n_0_l = m0[v_j];
        w = fn1(n_0_l);
        for (; a; a -= 4)
          n_0_j = v_j;
      }
  return 0;
}