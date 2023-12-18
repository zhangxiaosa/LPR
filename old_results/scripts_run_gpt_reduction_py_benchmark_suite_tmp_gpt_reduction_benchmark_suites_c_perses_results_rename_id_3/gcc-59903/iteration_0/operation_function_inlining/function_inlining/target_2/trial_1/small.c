#include <stdio.h>

typedef signed a;
typedef short b;
typedef int c;
typedef unsigned char d;
typedef unsigned e;
d fn1(d p1, int p2) {
  return p1 > p2 ? p1 : p1 << p2;
}

struct i {
  a j;
  a k;
  c l;
};

e m[4];
struct i n[2];

d fn3(p1) {
  struct i r;
  e s;
  for (c p1 = 0; p1 <= 39; ++p1) {
    struct i p2 = {0x15L, -5L};
    c w = 0;
    a a = 0;
    if (n[1].k ^ 0)
      p2 = n[1];
    for (; w; w += 1) {
      n[0] = p2;
      p2.l = m[p2.j];
      if (n[0].j != 0) {
        w = fn1(n[0].l, 2) && p2.k;
        for (; a; a += 1) {
          n[0] = p2;
        }
      }
    }
  }
  return p2;
}

int main() {
  return 0;
}
