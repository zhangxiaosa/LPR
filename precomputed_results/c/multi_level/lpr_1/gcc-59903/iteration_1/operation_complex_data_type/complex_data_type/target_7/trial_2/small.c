#include <stdint.h>

int32_t i_j;
int32_t i_l;

uint32_t m0[4] = {1, 2, 3, 4};

struct i {
  int32_t j;
  int32_t l;
};

struct i n[2];

int main() {}

int fn1(uint8_t p1, int32_t p2) { return p1 ? p1 : p2; }

int fn3() {
  uint32_t s;
  int32_t v_j = 0x15L; // Decomposed v.j
  int32_t v_l;
  int32_t w;
  int32_t a;

  for (; w; w += 1) {
    for (s = 0; s <= 39; ++s) {
      for (v_j = 0; v_j <= 2; v_j += 1) {
        n[0].j = v_j; // Decomposed n[0].j
        n[0].l = v_l = m0[v_j]; // Decomposed n[0].l and v_l
        w = fn1(n[0].l, 2);

        for (; a; a -= 4) {
          n[0].j = v_j; // Decomposed n[0].j
          n[0].l = v_l; // Reuse decomposed n[0].l
        }
      }
    }
  }

  return 0;
}