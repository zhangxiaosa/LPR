#include <stdint.h>

int32_t i_j;
int32_t i_l;

uint32_t m0[4] = {1, 2, 3, 4};

struct i {
  int32_t j;
  int32_t l;
};

int32_t n_0_j;
int32_t n_0_l;

int32_t n_1_j;
int32_t n_1_l;

int main() {}

int fn1(uint8_t p1, int32_t p2) { return p1 ? p1 : p2; }

int fn3() {
  uint32_t s;
  struct i v = {0x15L};
  int32_t w;
  int32_t a;

  for (; w; w += 1) {
    for (s = 0; s <= 39; ++s) {
      for (v.j = 0; v.j <= 2; v.j += 1) {
        n_0_j = v.j;
        n_0_l = v.l;
        v.l = m0[v.j];
        w = fn1(n_0_l, 2);

        for (; a; a -= 4) {
          n_0_j = v.j;
          n_0_l = v.l;
        }
      }
    }
  }

  return 0;
}