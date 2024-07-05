#include <stdint.h>

typedef int32_t a;
typedef int32_t c;
typedef uint8_t d;
typedef uint32_t e;

d fn1(d p1, int32_t p2) { return p1 ? p1 : p2; }

struct i {
  a j;
  c l;
};

e m[4];
struct i n[2];

uint32_t fn3() {
  e s;
  c w;
  c a;
  for (; w; w += 1)
    for (s = 0; s <= 39; ++s)
      for (n[0].j = 0; n[0].j <= 2; n[0].j += 1) {
        n[0].l = m[n[0].j];
        w = fn1(n[0].l, 2);
      }
  return 0;
}

int32_t main() {}
