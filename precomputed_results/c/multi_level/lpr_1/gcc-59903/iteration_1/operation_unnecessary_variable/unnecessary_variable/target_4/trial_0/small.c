#include <stdint.h>

uint32_t m0[4];

struct i {
  int32_t j;
  int32_t l;
};

struct i n[2];

int main() {}

int fn1(uint8_t p1) { return p1 ? p1 : 0; }

int fn3() {
  uint32_t s;
  int32_t w;
  int32_t a;
  
  for (; w; w += 1) {
    for (s = 0; s <= 39; ++s) {
      for (n[0].j = 0; n[0].j <= 2; n[0].j += 1) {
        n[0].l = m0[n[0].j];
        w = fn1(n[0].l);
        for (; a; a -= 4) {
          n[0].j = v.j;
          n[0].l = v.l;
        }
      }
    }
  }
  
  return 0;
}