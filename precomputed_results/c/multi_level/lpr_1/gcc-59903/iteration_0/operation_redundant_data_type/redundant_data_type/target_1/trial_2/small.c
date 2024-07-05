#include <stdio.h>

typedef int c;
typedef unsigned char d;
typedef unsigned e;
d fn1(d p1, int p2) { return p1 ? p1 : p2; }
struct i {
  signed j;
  int l;
};
e m[4];
struct i n[2];
d fn3(d p1) {
  struct i r;
  e s;
  struct i v = {0x15L};
  for (int w = 0; w != 0; w += 1)
    for (s = 0; s <= 39; ++s)
      for (r.j = 0; r.j <= 2; r.j += 1) {
        n[0] = v;
        v.l = m[r.j];
        w = fn1(n[0].l, 2);
        for (int a = 0; a != 0; a -= 4)
          n[0] = r;
      }
  return p1;
}

int main() {}
