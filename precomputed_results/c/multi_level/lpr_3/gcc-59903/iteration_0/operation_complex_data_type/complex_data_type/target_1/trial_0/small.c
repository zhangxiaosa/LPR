#include <stdio.h>

typedef unsigned int e;

typedef struct {
  int j;
  int k;
  int l;
} i;

unsigned int m[4];

i n[2];

i fn2(int p1, i p2, unsigned int p3, short p4);

char fn1(unsigned int p1, int p2) {
  return p1 > p2 ? p1 : p1 << p2;
}

unsigned int fn3(unsigned int p1) {
  unsigned char q[7][7];
  i r = {0, 0, 0};
  unsigned int s;
  if (fn2(p1, r, s, q[0][0]), p1);
  return p1;
}

i fn2(int p1, i p2, unsigned int p3, short p4) {
  i v = {0x15L, -5L, 0};
  int w;
  int a;
  if (p4 ^ v.k);
  else
    v = n[1];
  for (; w; w += 1)
    for (p3 = 0; p3 <= 39; ++p3)
      for (p2.j = 0; p2.j <= 2; p2.j += 1) {
        n[0] = v;
        v.l = m[p2.j];
        i b;
        if (!n[0].j);
        else {
          w = fn1(n[0].l, 2) && p2.k;
          for (; a; a += 1)
            n[0] = b;
        }
      }
  return p2;
}

int main() {}
