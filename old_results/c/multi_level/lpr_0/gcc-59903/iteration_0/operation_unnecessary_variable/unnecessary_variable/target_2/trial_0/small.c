#include <stdio.h>

struct i {
  int j;
  int k;
  int l;
};

unsigned_char fn1(unsigned_char p1, int p2) {
  return p1 > 2 ? p1 : p1 << 2;
}

struct i n[2];
unsigned_char fn3(unsigned_char p1) {
  struct i r;
  fn2(p1, r);
  return p1;
}

struct i fn2(unsigned_char p1, struct i p2) {
  struct i v = {0x15L, -5L};
  int w;

  if (0 ^ v.k)
    ;
  else
    v = n[1];

  for (; w; w += 1)
    for (int p3 = 0; p3 <= 39; ++p3)
      for (p2.j = 0; p2.j <= 2; p2.j += 1) {
        n[0] = v;
        v.l = 0;
        if (!n[0].j)
          ;
        else {
          w = fn1(n[0].l, 2) && 4;
          for (int a = 0; a;
               a += 4)
            n[0] = v;
        }
      }

  return p2;
}
