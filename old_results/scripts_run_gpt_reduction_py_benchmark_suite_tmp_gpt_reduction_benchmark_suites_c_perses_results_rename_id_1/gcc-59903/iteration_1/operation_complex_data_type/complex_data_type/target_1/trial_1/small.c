#include <stdint.h>

int32_t j;
int32_t l;
uint32_t m[4];
int32_t n_0_j[2];
int32_t n_0_l[2];

int main() {}

int fn1(uint8_t p1, int32_t p2) { return p1 ? p1 : p2; }

int fn3() {
  uint32_t s;
  int32_t v_0_j = 0x15L;
  int32_t v_0_l;
  int32_t w;
  int32_t a;

  for (; w; w += 1)
    for (s = 0; s <= 39; ++s)
      for (v_0_j = 0; v_0_j <= 2; v_0_j += 1) {
        n_0_j[0] = v_0_j;
        n_0_l[0] = v_0_l;
        v_0_l = m[v_0_j];
        w = fn1(n_0_l[0], 2);
        for (; a; a -= 4)
          n_0_j[0] = v_0_j;
      }

  return 0;
}