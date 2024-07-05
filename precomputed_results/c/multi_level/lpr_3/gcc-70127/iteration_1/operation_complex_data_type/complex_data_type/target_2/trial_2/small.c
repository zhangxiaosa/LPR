#include <stdio.h>

unsigned int u;

signed int ab;
signed int q;

#define V_SIZE 1

unsigned int v_ab[V_SIZE];
signed int v_q[V_SIZE];

signed int w_init_ab = 0x1C87E74F;
signed int w_init_q = 816;

int main() {
  signed int a_ab = 8;
  signed int a_q = 666;

  for (; u <= 1; u += 1) {
    a_ab = v_ab[0] = w_init_ab;
    a_q = v_q[0] = w_init_q;
  }

  unsigned int j = v_q[0];

  printf("checksum = %X\n", j);

  return 0;
}