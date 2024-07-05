#include <stdio.h>

unsigned m[4];
int n_j[2];
int n_k[2];
int n_l[2];

char fn1(unsigned p1, int p2) { return p1 > p2 ? p1 : p1 << p2; }

struct i {
  int j;
  int k;
  int l;
};

struct i fn2(int p1, int p2_j, int p2_k, int p3, short p4) {
  struct i v_j = {0x15L};
  struct i v_k = {-5L};
  int w;
  int a;

  if (p4 ^ v_k)
    ;
  else {
    n_j[1] = v_j;
    n_k[1] = v_k;
  }

  for (; w; w += 1)
    for (p3 = 0; p3 <= 39; ++p3)
      for (p2_j = 0; p2_j <= 2; p2_j += 1) {
        n_j[0] = v_j;
        n_k[0] = v_k;
        n_l[0] = m[p2_j];

        if (!n_j[0])
          ;
        else {
          w = fn1(n_l[0], 2) && p2_k;
          for (; a; a += 1)
            n_j[0] = v_j;
        }
      }

  struct i result;
  result.j = p2_j;
  result.k = p2_k;
  result.l = p3;
  return result;
}

unsigned fn3(unsigned p1) {
  unsigned char q[7][7];
  struct i r_j;
  struct i r_k;
  struct i r_l;

  if (fn2(p1, r_j, r_k, 0, r_l), p1)
    ;

  return p1;
}

int main() { return 0; }
