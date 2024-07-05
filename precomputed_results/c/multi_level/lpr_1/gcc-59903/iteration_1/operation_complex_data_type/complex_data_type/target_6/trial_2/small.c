#include <stdint.h>

int32_t i_j;
int32_t i_l;

uint32_t m0[4] = {1, 2, 3, 4};

int32_t n_j[2];
int32_t n_l[2];

int main() {}

int fn1(uint8_t p1, int32_t p2) { return p1 ? p1 : p2; }

int fn3() {
  uint32_t s;
  int32_t v_j = 0x15L;
  int32_t w;
  int32_t a;

  for (; w != 0; w += 1) {
    for (s = 0; s <= 39; ++s) {
      for (v_j = 0; v_j <= 2; v_j += 1) {
        n_j[0] = v_j;
        n_l[0] = m0[v_j];
        w = fn1(n_l[0], 2);

        for (; a != 0; a -= 4) {
          n_j[0] = v_j;
        }
      }
    }
  }

  return 0;
}
