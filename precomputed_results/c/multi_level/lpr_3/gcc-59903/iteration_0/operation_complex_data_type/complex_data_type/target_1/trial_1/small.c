#include <stdio.h>

typedef unsigned int e;

unsigned int fn1(unsigned int p1, short p2) {
  return p1 > p2 ? p1 : p1 << p2;
}

struct i {
  int j;
  int k;
  int l;
};

unsigned int m[4];

struct i n[2];

struct i fn2(int p1, int p2, int p3);

unsigned int fn3(unsigned int p1) {
  unsigned int q[7][7];
  struct i r;
  unsigned int s;
  if (fn2(p1, r.j, s))
    ;
  return p1;
}

struct i fn2(int p1, int p2, int p3) {
  struct i v = {0x15, -5};
  if (p2 ^ v.k)
    ;
  else
    v = n[1];
  for (; p1; p1 += 1)
    for (p3 = 0; p3 <= 39; ++p3)
      for (int j = 0; j <= 2; j += 1) {
        n[0] = v;
        v.l = m[j];
        struct i b;
        if (n[0].j == 0)
          ;
        else {
          p1 = fn1(n[0].l, 2) && p2;
          for (; p3; p3 += 1)
            n[0] = b;
        }
      }
  return (struct i){p1, p2, p3};
}

int main() {
  return 0;
}