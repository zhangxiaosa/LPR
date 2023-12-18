#include <stdio.h>

unsigned m[4];

int n_0_j;
int n_0_k;
int n_0_l;
int n_1_j;
int n_1_k;
int n_1_l;

char fn1(unsigned p1, int p2) { return p1 > p2 ? p1 : p1 << p2; }

struct i fn2(int p1, int p2_j, int p2_k, int p2_l, unsigned p3, short p4) {
  int v_j = 0x15L;
  int v_k = -5L;
  int v_l;
  int w;
  int a;

  if (p4 ^ v_k)
    ;
  else {
    n_1_j = v_j;
    n_1_k = v_k;
    n_1_l = v_l;
  }

  for (; w; w += 1)
    for (p3 = 0; p3 <= 39; ++p3)
      for (p2_j = 0; p2_j <= 2; p2_j += 1) {
        n_0_j = v_j;
        n_0_k = v_k;
        n_0_l = v_l;

        if (!n_0_j)
          ;
        else {
          w = fn1(n_0_l, 2) && p2_k;
          for (; a; a += 1)
            n_0_j = v_j;
        }
      }

  return p2_j;
}

unsigned fn3(unsigned p1) {
  unsigned char q[7][7];
  int r_j;
  int r_k;
  int r_l;

  if (fn2(p1, r_j, r_k, r_l, 0, q[0][0]))
    ;

  return p1;
}

int main() { return 0; }