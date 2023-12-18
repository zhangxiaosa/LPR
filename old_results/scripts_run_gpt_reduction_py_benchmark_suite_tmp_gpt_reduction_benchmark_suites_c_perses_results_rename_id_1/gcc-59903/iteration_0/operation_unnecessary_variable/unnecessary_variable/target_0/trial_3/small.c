#include <stdint.h>

typedef int32_t c;
typedef uint8_t d;
typedef uint32_t e;

d fn1(d p1, int32_t p2) { return p1 ? p1 : p2; }
struct i {
  c l;
};
e m[4];
struct i n[2];
e fn3(e p1) {
  struct i r;
  e s;
  struct i v = {0x15L};
  c w;
  for (; w; w += 1)
    for (s = 0; s <= 39; ++s)
      for (r.l = 0; r.l <= 2; r.l += 1) {
        n[0] = v;
        v.l = m[r.l];
        struct i b;
        w = fn1(n[0].l, 2);
      }
  return p1;
}

int32_t main() {}
