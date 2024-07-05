#include <stdio.h>

struct i {
  signed j;
  signed k;
  int l;
};

unsigned m[4];
struct i n[2];
char fn1(unsigned p1, int p2) { return p1 > p2 ? p1 : p1 << p2; }

unsigned fn3(p1) {
  unsigned char q[7][7];
  struct i r;
  unsigned s;
  struct i p2 = r;
  unsigned p3 = s;
  short p4 = q[0][0];

  struct i v = {0x15L, -5L};
  int w;
  int a;

  if (p4 ^ v.k)
    ;
  else
    v = n[1];

  for (; w; w += 1)
    for (p3 = 0; p3 <= 39; ++p3)
      for (p2.j = 0; p2.j <= 2; p2.j += 1) {
        n[0] = v;
        v.l = m[p2.j];
        struct i b;
        if (!n[0].j)
          ;
        else {
          w = fn1(n[0].l, 2) && p2.k;
          for (; a; a += 1)
            n[0] = b;
        }
      }

  return p2;
}

int main() {}
