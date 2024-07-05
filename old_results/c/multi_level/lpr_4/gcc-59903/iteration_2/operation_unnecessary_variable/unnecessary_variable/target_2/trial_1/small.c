#include <stdio.h>

unsigned m[4];

struct i {
  int j;
  int k;
  int l;
};

struct i n[2];

char fn1(unsigned p1, int p2) {
  return p1 > p2 ? p1 : p1 << p2;
}

struct i fn2(int p1, struct i p2, unsigned p3, short p4) {
  struct i v = {0x15L, -5L};
  int w;
  int a;

  if (p4 ^ v.k) {
    // No changes
  } else {
    v.j = n[1].j;
    v.k = n[1].k;
    v.l = n[1].l;
  }

  for (; w; w += 1) {
    n[0].j = v.j;
    n[0].k = v.k;
    n[0].l = v.l;

    v.l = m[p2.j];

    if (!n[0].j) {
      // No changes
    } else {
      n[0].j = v.j;
      n[0].k = v.k;
      n[0].l = v.l;

      w = fn1(n[0].l, 2) && p2.k;

      for (; a; a += 1) {
        n[0].j = v.j;
        n[0].k = v.k;
        n[0].l = v.l;
      }
    }
  }

  return p2;
}

unsigned fn3(p1) {
  unsigned char q[7][7];

  // No changes

  return p1;
}

int main() {}
