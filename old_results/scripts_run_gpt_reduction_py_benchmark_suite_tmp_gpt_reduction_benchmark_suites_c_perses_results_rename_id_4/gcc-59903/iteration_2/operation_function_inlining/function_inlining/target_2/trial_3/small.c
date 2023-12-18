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
    // Inlined code
    if (p1 > p2.j ? p1 : p1 << p2.j) {
      // Inlined code
      struct i n0 = v;
      n0.l = m[p2.j];
      if (n0.j != 0) {
        w = fn1(n0.l, 2) && p2.k;
        for (; a; a += 1)
          n0 = v;
      }
    }
  } else {
    v = n[1];
  }
  // Inlined code
  return v;
}

unsigned fn3(int p1) {
  unsigned char q[7][7];
  struct i v = {0x15L, -5L};
  int w;
  int a;
  if ((p1 > v.j ? p1 : p1 << v.j) > 0) {
    // Inlined code
    if (p1 > v.j ? p1 : p1 << v.j) {
      // Inlined code
      struct i n0 = v;
      n0.l = m[v.j];
      if (n0.j != 0) {
        w = fn1(n0.l, 2) && v.k;
        for (; a; a += 1)
          n0 = v;
      }
    }
  }
  return p1;
}

int main() {
  // Call to fn3
  fn3(10);
  return 0;
}