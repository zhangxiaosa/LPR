#include <stdio.h>

unsigned m[4];

int n_j;
int n_k;
int n_l;

char fn1(unsigned p1, int p2) { return p1 > p2 ? p1 : p1 << p2; }

void fn2(int p1, unsigned p3, short p4) {
  int v_j = 0x15L;
  int v_k = -5L;
  int v_l = 0;
  int w;
  int a;
  if (p4 ^ v_k)
    ;
  else {
    v_j = n_j;
    v_k = n_k;
    v_l = n_l;
  }
  for (; w; w += 1)
    for (p3 = 0; p3 <= 39; ++p3)
      for (v_j = 0; v_j <= 2; v_j += 1) {
        n_j = v_j;
        v_l = m[v_j];
        if (!n_j)
          ;
        else {
          w = fn1(v_l, 2) && v_k;
          for (; a; a += 1)
            n_j = v_j;
        }
      }
}

unsigned fn3(unsigned p1) {
  unsigned char q[7][7];
  if (fn2(p1, 0, q[0][0]), p1)
    ;
  return p1;
}

int main() {}
