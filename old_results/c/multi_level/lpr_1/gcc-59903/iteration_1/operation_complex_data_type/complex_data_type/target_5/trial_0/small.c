#include <stdint.h>

int32_t i_j;
int32_t i_l;

uint32_t m0_0;
uint32_t m0_1;
uint32_t m0_2;
uint32_t m0_3;

int32_t i_struct_j;
int32_t i_struct_l;

struct i {
  int32_t j;
  int32_t l;
};

struct i n_0;
struct i n_1;

int main() {}

int fn1(uint8_t p1, int32_t p2) { return p1 ? p1 : p2; }

int fn3() {
  uint32_t s;
  int32_t v_j;
  int32_t v_l;
  int32_t w;
  int32_t a;

  for (; w; w += 1) {
    for (s = 0; s <= 39; ++s) {
      for (v_j = 0; v_j <= 2; v_j += 1) {
        n_0.j = v_j;
        n_0.l = v_l;
        v_l = m0[v_j];
        w = fn1(n_0.l, 2);

        for (; a; a -= 4) {
          n_0.j = v_j;
          n_0.l = v_l;
        }
      }
    }
  }

  return 0;
}