#include <stdio.h>

char fn1(unsigned p1, int p2) {
  return p1 > p2 ? p1 : p1 << p2;
}

int n_0_j;
int n_0_k;
int n_0_l;

struct i {
  int j;
  int k;
};

unsigned m[4];

unsigned fn3(unsigned p1) {
  unsigned char q[7][7];
  struct i r;
  unsigned p3 = 0;
  short p4 = q[0][0];

  int v_j = 0x15L;
  struct i p2;
  p2.j = 0;
  p2.k = 0;

  if (p4 ^ -5L)
    ;
  else
    v_j = 0;

  int w;
  int a;

  for (; w; w += 1) {
    for (p3 = 0; p3 <= 39; ++p3) {
      for (p2.j = 0; p2.j <= 2; p2.j += 1) {
        n_0_j = v_j;
        n_0_k = 5L;
        if (!n_0_j)
          ;
        else {
          w = (p1 > n_0_j || (p1 << n_0_j)) && p2.k;
          for (; a; a += 4)
            n_0_j = v_j;
          n_0_l = m[p2.j];
        }
      }
    }
  }

  // Update r with the expected value based on the inlined code
  r.j = p2.j;
  r.k = p2.k;

  if (p1)
    ;

  return p1;
}