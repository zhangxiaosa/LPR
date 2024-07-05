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
  struct i r;
  e s;
  struct i v = {0x15L};
  c w;
  c a;
  for (; w; w += 1)
    for (s = 0; s <= 39; ++s)
      for (r.j = 0; r.j <= 2; r.j += 1) {
        n[0] = v;
        v.l = m[r.j];
        w = fn1(n[0].l, 2);
        for (; a; a -= 4)
          n[0] = v;
      }
  return 0;
}

int32_t main() {}
