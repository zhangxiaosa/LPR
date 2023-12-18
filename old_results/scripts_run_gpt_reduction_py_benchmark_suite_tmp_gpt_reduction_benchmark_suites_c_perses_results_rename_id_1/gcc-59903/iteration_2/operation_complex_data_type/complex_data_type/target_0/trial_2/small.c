#include <stdint.h>

uint32_t m0[4];

int32_t i_j[2];
int32_t i_l[2];

int main() {}

int fn1(uint8_t p1) {
  return p1 ? p1 : 0;
}

int fn3() {
  uint32_t s;
  int32_t w;
  int32_t a;

  for (; w; w += 1) {
    for (s = 0; s <= 39; ++s) {
      for (i_j[0] = 0; i_j[0] <= 2; i_j[0] += 1) {
        i_l[0] = m0[i_j[0]];
        w = fn1(i_l[0]);

        for (; a; a -= 4) {
          // Code inside the innermost loop
        }
      }
    }
  }

  return 0;
}