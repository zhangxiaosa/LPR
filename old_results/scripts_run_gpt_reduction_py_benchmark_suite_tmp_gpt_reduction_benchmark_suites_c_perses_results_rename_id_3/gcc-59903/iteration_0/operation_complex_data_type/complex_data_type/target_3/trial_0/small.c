#include <stdio.h>

unsigned int e;

char fn1(unsigned int p1, int p2) { return p1 > p2 ? p1 : p1 << p2; }

signed int i_j;
signed int i_k;
int i_l;

unsigned int m_0;
unsigned int m_1;
unsigned int m_2;
unsigned int m_3;

signed int n_0_j;
signed int n_0_k;
int n_0_l;

signed int n_1_j;
signed int n_1_k;
int n_1_l;

signed int fn2(int p1, signed int p2_j, signed int p2_k, int p3, short p4);

unsigned int fn3(unsigned int p1) {
  unsigned char q[7][7];
  signed int r_j;
  signed int r_k;
  int s;
  if (fn2(p1, r_j, r_k, s, q[0][0]), p1)
    ;
  return p1;
}

signed int fn2(int p1, signed int p2_j, signed int p2_k, int p3, short p4) {
  signed int v_j = 0x15L;
  signed int v_k = -5L;
  int v_l;

  n_0_j = v_j;
  n_0_k = v_k;
  n_0_l = v_l;

  for (; w; w += 1)
    for (p3 = 0; p3 <= 39; ++p3)
      for (p2_j = 0; p2_j <= 2; p2_j += 1) {
        n_0_j = v_j;
        n_0_k = v_k;
        n_0_l = v_l;
        v_l = (p2_j == 0) ? m_0 : (p2_j == 1) ? m_1 : (p2_j == 2) ? m_2 : m_3;
        signed int b_j;
        signed int b_k;
        int b_l;
        if (!(n_0_j))
          ;
        else {
          w = fn1(n_0_l, 2) && p2_k;
          for (; a; a += 1) {
            n_0_j = b_j;
            n_0_k = b_k;
            n_0_l = b_l;
          }
        }
      }
  p2_j = n_0_j;
  p2_k = n_0_k;
  p3 = n_0_l;
  return p2;
}

int main() {}.