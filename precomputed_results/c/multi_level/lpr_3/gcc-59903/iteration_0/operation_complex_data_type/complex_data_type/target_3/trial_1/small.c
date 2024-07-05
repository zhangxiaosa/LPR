#include <stdio.h>

typedef unsigned int e;

char fn1(unsigned int p1, int p2) { return p1 > p2 ? p1 : p1 << p2; }

struct i {
  signed int j;
  signed int k;
  int l;
};

unsigned int m[4];

struct i n0;
struct i n1;

struct i fn2(int p1, struct i p2, unsigned int p3, short p4);

unsigned int fn3(unsigned int p1) {
  unsigned char q[7][7];
  struct i r;
  unsigned int s;
  if (fn2(p1, r, s, q[0][0]), p1)
    ;
  return p1;
}

struct i fn2(int p1, struct i p2, unsigned int p3, short p4) {
  struct i v = {0x15L, -5L};
  int w;
  int a;
  if (p4 ^ v.k)
    ;
  else
    v = n1;
  for (; w; w += 1)
    for (p3 = 0; p3 <= 39; ++p3)
      for (n0.j = 0; n0.j <= 2; n0.j += 1) {
        n0 = v;
        v.l = m[n0.j];
        struct i b;
        if (!n0.j)
          ;
        else {
          w = fn1(n0.l, 2) && p2.k;
          for (; a; a += 1)
            n0 = b;
        }
      }
  return p2;
}

int main() {}
