#include <stdint.h>

int32_t j;
int32_t l;
uint32_t m[4];
int32_t n0_j;
int32_t n0_l;
int32_t n1_j;
int32_t n1_l;

int main() {}

int fn1(uint8_t p1, int32_t p2) {
  return p1 ? p1 : p2;
}

int fn3() {
  uint32_t s;
  int32_t w;
  int32_t a;

  for (; w; w += 1) {
    for (s = 0; s <= 39; ++s) {
      for (n0_j = 0; n0_j <= 2; n0_j += 1) {
        j = n0_j;
        l = m[j];
        w = fn1(l, 2);

        for (; a; a -= 4) {
          j = n0_j;
          l = m[j];
        }
      }
    }
  }

  return 0;
}