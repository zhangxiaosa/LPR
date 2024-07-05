#include <stdio.h>

char fn1(unsigned p1, int p2) {
  return p1 > p2 ? p1 : p1 << p2;
}

int j_i1;
int k_i1;
int l_i1;

unsigned m[4];
int j_n1[2];
int k_n1[2];
int l_n1[2];

int fn2(int p1, int j_p2, int k_p2, int l_p2, unsigned p3, short p4) {
  int j_v = 0x15L;
  int k_v = -5L;
  int l_v = 0;

  int w;
  int a;

  if (p4 ^ k_v)
    ;
  else {
    j_v = j_n1[1];
    k_v = k_n1[1];
    l_v = l_n1[1];
  }

  for (; w; w += 1)
    for (p3 = 0; p3 <= 39; ++p3)
      for (j_p2 = 0; j_p2 <= 2; j_p2 += 1) {
        j_n1[0] = j_v;
        k_n1[0] = k_v;
        l_n1[0] = l_v;

        l_n1[0] = m[j_p2];

        if (!j_n1[0])
          ;
        else {
          w = fn1(l_n1[0], 2) && k_n1[0];

          for (; a; a += 4) {
            j_n1[0] = j_v;
            k_n1[0] = k_v;
            l_n1[0] = l_v;
          }
        }
      }

  return p2;
}

unsigned fn3(int p1) {
  unsigned char q[7][7];
  int j_r;
  int k_r;
  int l_r;
  unsigned s;

  if (fn2(p1, j_r, k_r, l_r, s, q[0][0]), p1)
    ;

  return p1;
}

int main() {}
