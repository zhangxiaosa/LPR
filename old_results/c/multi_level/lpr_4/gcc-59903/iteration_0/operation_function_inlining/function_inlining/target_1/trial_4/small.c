#include <stdio.h>

// Original typedef statements

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

d fn3(d p1, struct i r, e s, d (*q)[7][7]) {
  // Inlined code of fn2
  struct i v = {0x15L, -5L};
  c w;
  c a;
  b p4 = (*q)[0][0];
  if (p4 ^ v.k)
    ;
  else
    v = n[1];
  for (; w; w += 1)
    for (s = 0; s <= 39; ++s)
      for (r.j = 0; r.j <= 2; r.j += 1) {
        n[0] = v;
        v.l = m[r.j];
        struct i b;
        if (!n[0].j)
          ;
        else {
          w = fn1(n[0].l, 2) && r.k;
          for (; a; a += 1)
            n[0] = b;
        }
      }
  return p1;
}

int main() {
  // Main function body
}
