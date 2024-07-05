#include <stdio.h>

char fn1(unsigned p1, int p2) {
  return p1 > p2 ? p1 : p1 << p2;
}

struct i {
  int j;
  int k;
  int l;
};

unsigned m[4];
struct i n[2];

struct i fn2(int p1, struct i p2, unsigned p3, short p4) {
  struct i v = {0x15L, -5L};
  int w;
  int a;

  if (p4 ^ v.k)
    ;
  else
    v = n[1];

  for (p3 = 0; p3 <= 39; p3 += 4) {
    // Unrolled iteration 1
    int p3_1 = p3;
    int p3_inv1 = p3_1;
    n[0] = v;
    v.l = m[p2.j];
    if (!n[0].j)
      ;
    else {
      w = fn1(n[0].l, 2) && p2.k;
      for (; a; a += 1)
        n[0] = v;
    }

    // Unrolled iteration 2
    int p3_2 = p3 + 1;
    int p3_inv2 = p3_2;
    if (p3_inv2 > 39)
      break;
    n[0] = v;
    v.l = m[p2.j];
    if (!n[0].j)
      ;
    else {
      w = fn1(n[0].l, 2) && p2.k;
      for (; a; a += 1)
        n[0] = v;
    }

    // Unrolled iteration 3
    int p3_3 = p3 + 2;
    int p3_inv3 = p3_3;
    if (p3_inv3 > 39)
      break;
    n[0] = v;
    v.l = m[p2.j];
    if (!n[0].j)
      ;
    else {
      w = fn1(n[0].l, 2) && p2.k;
      for (; a; a += 1)
        n[0] = v;
    }

    // Unrolled iteration 4
    int p3_4 = p3 + 3;
    int p3_inv4 = p3_4;
    if (p3_inv4 > 39)
      break;
    n[0] = v;
    v.l = m[p2.j];
    if (!n[0].j)
      ;
    else {
      w = fn1(n[0].l, 2) && p2.k;
      for (; a; a += 1)
        n[0] = v;
    }
  }

  return p2;
}

unsigned fn3(p1) {
  unsigned char q[7][7];
  struct i r;
  if (fn2(p1, r, 0, q[0][0]), p1)
    ;
  return p1;
}

int main() {
  // Code for main function
  return 0;
}