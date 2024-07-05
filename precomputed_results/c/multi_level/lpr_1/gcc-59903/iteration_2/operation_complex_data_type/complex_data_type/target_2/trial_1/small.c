#include <stdint.h>

uint32_t m0[4];

int32_t v_j;
int32_t v_l;

int32_t n[2][2];

int main() {}

int fn1(uint8_t p1) { return p1 ? p1 : 0; }

int fn3() {
  uint32_t s;
  v_j = 0x15L;
  int32_t w;
  int32_t a;
  for (; w; w += 1)
    for (s = 0; s <= 39; ++s)
      for (v_j = 0; v_j <= 2; v_j += 1) {
        n[0][0] = v_j;
        v_l = m0[v_j];
        w = fn1(n[0][1]);
        for (; a; a -= 4)
          n[0][0] = v_j;
      }
  return 0;
}