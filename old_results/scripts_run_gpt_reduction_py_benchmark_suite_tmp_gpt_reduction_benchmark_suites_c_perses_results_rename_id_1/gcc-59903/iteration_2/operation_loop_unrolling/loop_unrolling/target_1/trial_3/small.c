#include <stdint.h>

uint32_t m0[4];
struct i {
  int32_t j;
  int32_t l;
};
struct i n[2];

int main() {}

int fn1(uint8_t p1) {
  return p1 ? p1 : 0;
}

int fn3() {
  uint32_t s;
  struct i v = {0x15L};
  int32_t w = 4 * iterations;
  int32_t a;

  for (; w >= 4; w -= 4) {
    for (s = 0; s <= 39; ++s) {
      for (v.j = 0; v.j <= 2; v.j += 1) {
        for (int i = 0; i < 4; ++i) {
          n[0] = v;
          v.l = m0[v.j];
          int32_t current_w = w + (4 * i);
          int32_t current_a = a;

          n[0] = v;
          while (current_a) {
            n[0] = v;
            current_a -= 4;
          }
        }
      }
    }
  }

  int iterations = w / 4;
  for (; iterations; --iterations) {
    for (s = 0; s <= 39; ++s) {
      for (v.j = 0; v.j <= 2; v.j += 1) {
        n[0] = v;
        v.l = m0[v.j];
        int32_t current_a = a;

        n[0] = v;
        while (current_a) {
          n[0] = v;
          current_a -= 4;
        }
      }
    }
  }

  int final_w = iterations * 4;
  return 0;
}
