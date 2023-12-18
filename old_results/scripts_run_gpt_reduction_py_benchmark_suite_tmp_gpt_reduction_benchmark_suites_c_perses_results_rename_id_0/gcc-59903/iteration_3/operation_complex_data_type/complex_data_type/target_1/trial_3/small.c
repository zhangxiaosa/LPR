#include <stdio.h>

char fn1(unsigned p1, int p2) {
  return p1 > p2 ? p1 : p1 << p2;
}

int n_0_j;
int n_0_k;
int n_0_l;

int j;  // Decomposed from struct i
int k;  // Decomposed from struct i

unsigned m[4];

int fn2(int p1, int j, int k, unsigned p3, short p4) {
  int v_j;
  v_j = 0x15L;
  int w;
  int a;
  if (p4 ^ -5L)
    ;
  else
    v_j = 0;
  for (; w; w += 1)
    for (p3 = 0; p3 <= 39; ++p3)
      for (j = 0; j <= 2; j += 1) {
        n_0_j = v_j;
        n_0_k = 5L;
        if (!n_0_j)
          ;
        else {
          w = fn1(n_0_l, 2) && k;
          for (; a; a += 4)
            n_0_j = v_j;
          n_0_l = m[j];
        }
      }
  return k;  // Return value decomposed from struct i
}

unsigned fn3(int p1) {
  unsigned char q[7][7];
  int j;  // Decomposed from struct i
  int k;  // Decomposed from struct i
  if (fn2(p1, j, k, 0, q[0][0]), p1)
    ;
  return p1;
}

int main() {
  // Program execution starts here
  return 0;
}