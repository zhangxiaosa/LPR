#include <stdint.h>

int32_t i_j;
int32_t i_l;

uint32_t m0[4] = {1, 2, 3, 4};

int32_t n_j1;
int32_t n_l1;
int32_t n_j2;
int32_t n_l2;

int main() {}

int fn1(uint8_t p1, int32_t p2) { return p1 ? p1 : p2; }

int fn3() {
  uint32_t s;
  int32_t v_j = 0x15L;
  int32_t w;
  int32_t a;

  for (; w; w += 1) {
    for (s = 0; s <= 39; ++s) {
      for (n_j1 = 0; n_j1 <= 2; n_j1 += 1) {
        n_j2 = n_j1;
        n_l1 = m0[n_j1];
        w = fn1(n_l1, 2);

        for (; a; a -= 4) {
          n_j2 = n_j1;
        }
      }
    }
  }

  return 0;
}