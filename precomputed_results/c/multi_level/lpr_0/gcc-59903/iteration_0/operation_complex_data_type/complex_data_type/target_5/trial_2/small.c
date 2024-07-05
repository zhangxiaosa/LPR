#include <stdio.h>

unsigned char fn1(unsigned char p1, int p2) { return p1 > p2 ? p1 : p1 << p2; }

struct i {
  signed int j;
  signed int k;
  int l;
};

e m[4];

signed int n_j[2];
signed int n_k[2];
int n_l[2];

unsigned char fn3(unsigned char p1) {
  unsigned char q[7][7];
  signed int r_j;
  signed int r_k;
  int r_l;
  unsigned int s;
  if (fn2(p1, r_j, r_k, r_l, s, q[0][0]), p1)
    ;
  return p1;
}

signed int fn2(int p1, signed int p2_j, signed int p2_k, int p2_l, unsigned int p3, short p4) {
  signed int v_j = 0x15L;
  signed int v_k = -5L;
  int w;
  int a;
  if (p4 ^ v_k)
    ;
  else {
    v_j = n_j[1];
    v_k = n_k[1];
  }
  for (; w; w += 1)
    for (p3 = 0; p3 <= 39; ++p3)
      for (p2_j = 0; p2_j <= 2; p2_j += 1) {
        n_j[0] = v_j;
        n_k[0] = v_k;
        n_l[0] = m[p2_j];
        signed int b_j;
        signed int b_k;
        int b_l;
        if (!n_j[0])
          ;
        else {
          w = fn1(n_l[0], 2) && p2_k;
          for (; a; a += 4)
            n_j[0] = b_j;
          n_k[0] = b_k;
          n_l[0] = b_l;
        }
      }
  return p2_j;
}

int main() {}
