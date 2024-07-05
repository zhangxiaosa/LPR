#include <stdio.h>

int ab;
signed int q : 22;

unsigned int ab;
unsigned int s;

unsigned int j;
unsigned int t_ab;
unsigned int t_s;

unsigned int u;
int v_ab[1];
signed int v_q[1];

int w_ab = 0x1C87E74F;
signed int w_q = 816;

unsigned int fn5(unsigned int p1, signed int p2, unsigned int p3,
                 unsigned int p4, unsigned int p5) {
  int a_ab = 8L;
  signed int a_q = 666;

  for (p2 = 0; p2 >= 0; p2 -= 1)
    for (; u <= 1; u += 1) {
      a_ab = v_ab[p2] = w_ab;
      v_ab[p2] = a_ab;
      v_q[p2] = w_q;
    }
}

int main() {
  fn5(t_ab, 3, 2, t_s, 9u);
  j = v_q[0];
  printf("checksum = %X\n", j);
  return 0;
}