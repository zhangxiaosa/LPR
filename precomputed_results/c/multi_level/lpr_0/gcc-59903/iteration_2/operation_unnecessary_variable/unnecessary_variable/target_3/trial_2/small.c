#include<stdio.h>

typedef struct i {
  int j;
  int k;
} i;

unsigned m[4];

int n_0_j;
int n_0_k;
int n_0_l;

char fn1(unsigned p1, int p2) {
  return p1 > p2 ? p1 : p1 << p2;
}

i fn2(int p1, i p2, unsigned p3, short p4) {
  int v_j = 0x15L;
  int w;
  int a;

  if (p4 ^ -5L)
    ;
  else
    v_j = n_1_j;

  for (; w; w += 1)
    for (p3 = 0; p3 <= 39; ++p3)
      for (p2.j = 0; p2.j <= 2; p2.j += 1) {
        n_0_j = v_j;
        n_0_k = 5L;

        if (!n_0_j)
          ;
        else {
          w = fn1(n_0_l, 2) && p2.k;
          for (; a; a += 4)
            n_0_j = v_j;

          n_0_l = m[p2.j];
        }
      }

  return p2;
}

unsigned fn3(p1) {
  unsigned char q[7][7];
  i r;

  fn2(p1, r, 0, q[0][0]);

  return p1;
}

int main() {}
