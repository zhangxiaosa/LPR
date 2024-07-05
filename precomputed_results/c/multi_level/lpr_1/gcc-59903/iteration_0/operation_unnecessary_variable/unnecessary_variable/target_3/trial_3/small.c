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
e m[4];
uint32_t fn3(p1) {
  e s;
  struct i v = {0x15L};

  v.l = m[0];
  fn1(v.l, 2);

  return p1;
}

int32_t main() {}
