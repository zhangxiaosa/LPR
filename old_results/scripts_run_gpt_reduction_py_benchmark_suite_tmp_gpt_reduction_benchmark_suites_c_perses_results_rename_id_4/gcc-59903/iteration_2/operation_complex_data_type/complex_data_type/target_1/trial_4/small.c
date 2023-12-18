#include <stdio.h>

unsigned int m[4];

struct i {
  int j;
  int k;
  int l;
};

struct i {
  int j, k, l;
} n[2];

char fn1(unsigned int p1, int p2) {
  return p1 > p2 ? p1 : p1 << p2;
}

struct i fn2(int p1, int p2_j, int p2_k, int p2_l, unsigned int p3, short p4) {
  int v_j = 0x15L;
  int v_k = -5L;
  int v_l;
  int w;
  int a;
  if (p4 ^ v_k)
    ;
  else
    v_j = n[1].j;

  for (; w; w += 1) {
    for (p3 = 0; p3 <= 39; ++p3) {
      for (p2_j = 0; p2_j <= 2; p2_j += 1) {
        n[0].j = v_j;
        n[0].k = v_k;
        n[0].l = v_l;
        if (!n[0].j)
          ;
        else {
          w = fn1(n[0].l, 2) && p2_k;
          for (; a; a += 1) {
            n[0].j = v_j;
            n[0].k = v_k;
            n[0].l = v_l;
          }
        }
      }
    }
  }

  return p2_j;
}

unsigned int fn3(int p1) {
  unsigned char q[49];
  if (fn2(p1, n[0].j, n[0].k, n[0].l, 0, q[0][0]), p1)
    ;

  return p1;
}

int main() {
  return 0;
}