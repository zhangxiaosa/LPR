#include <stdio.h>
#include <stdbool.h>

char fn1(unsigned p1, int p2) { return p1 > p2 ? p1 : p1 << p2; }

int n_0_j;
int n_0_k;
int n_0_l;

unsigned m[4];

unsigned m_0;
unsigned m_1;
unsigned m_2;
unsigned m_3;

unsigned char q[7][7];

unsigned char q_0_0;
unsigned char q_0_1;
unsigned char q_0_2;
unsigned char q_0_3;
unsigned char q_0_4;
unsigned char q_0_5;
unsigned char q_0_6;
unsigned char q_1_0;
unsigned char q_1_1;
unsigned char q_1_2;
unsigned char q_1_3;
unsigned char q_1_4;
unsigned char q_1_5;
unsigned char q_1_6;
unsigned char q_2_0;
unsigned char q_2_1;
unsigned char q_2_2;
unsigned char q_2_3;
unsigned char q_2_4;
unsigned char q_2_5;
unsigned char q_2_6;
unsigned char q_3_0;
unsigned char q_3_1;
unsigned char q_3_2;
unsigned char q_3_3;
unsigned char q_3_4;
unsigned char q_3_5;
unsigned char q_3_6;
unsigned char q_4_0;
unsigned char q_4_1;
unsigned char q_4_2;
unsigned char q_4_3;
unsigned char q_4_4;
unsigned char q_4_5;
unsigned char q_4_6;
unsigned char q_5_0;
unsigned char q_5_1;
unsigned char q_5_2;
unsigned char q_5_3;
unsigned char q_5_4;
unsigned char q_5_5;
unsigned char q_5_6;
unsigned char q_6_0;
unsigned char q_6_1;
unsigned char q_6_2;
unsigned char q_6_3;
unsigned char q_6_4;
unsigned char q_6_5;
unsigned char q_6_6;

int fn2(int p1, int p2_j, int p2_k, unsigned p3, short p4) {
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
      for (p2_j = 0; p2_j <= 2; p2_j += 1) {
        n_0_j = v_j;
        n_0_k = 5L;

        if (!n_0_j)
          ;
        else {
          w = fn1(n_0_l, 2) && p2_k;

          for (; a; a += 4)
            n_0_j = v_j;

          n_0_l = m[p2_j];
        }
      }

  return p2_j;
}

unsigned fn3(int p1) {
  struct i r;
  if (fn2(p1, r.j, r.k, 0, q[0][0]), p1)
    ;
  return p1;
}

int main() {
  // Program execution starts here
  return 0;
}
