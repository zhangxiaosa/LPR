#include <stdint.h>

typedef int32_t a;
typedef int32_t c;
typedef uint8_t d;
typedef uint32_t e;

uint32_t fn3(int32_t p1) {
  a v_j = 0x15L;
  c v_l;
  e m[4];
  struct i n[2];
  e s;
  c w;
  c a;
  for (; w; w += 1)
    for (s = 0; s <= 39; ++s)
      for (int32_t r_j = 0; r_j <= 2; r_j += 1) {
        n[0].j = v_j;
        v_l = m[r_j];
        struct i b;
        w = fn1(n[0].l, 2);
        for (; a; a -= 4)
          n[0] = b;
      }
  return p1;
}

int32_t main() {}
