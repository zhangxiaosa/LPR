#include <stdio.h>

int ab;
signed int q : 22;
int u;
int v_ab[1];
int v_q[1];
int w_ab = 0x1C87E74F;
int w_q = 816;

int main() {
  int a_ab = 8L;
  int a_q = 666;

  for (; u <= 1; u += 1) {
    a_ab = v_ab[0] = w_ab;
    a_q = v_q[0] = w_q;
    v_ab[0] = a_ab;
    v_q[0] = a_q;
  }

  int j = v_q[0];

  printf("checksum = %X\n", j);

  return 0;
}