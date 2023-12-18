#include <stdio.h>

unsigned u;

signed int ab;
signed int q;
signed int a_ab;
signed int a_q;
signed int v_ab[V_SIZE];
signed int v_q[V_SIZE];
signed int w_init_ab;
signed int w_init_q;

#define V_SIZE 1

int main() {
  u = 0;
  ab = 0;
  q = 0;
  a_ab = 8;
  a_q = 666;
  v_ab[0] = 0x1C87E74F;
  v_q[0] = 816;
  w_init_ab = 0x1C87E74F;
  w_init_q = 816;

  for (; u <= 1; u += 2) {
    a_ab = v_ab[0] = w_init_ab;
    v_ab[0] = a_ab;

    a_q = v_q[0] = w_init_q;
    v_q[0] = a_q;
  }

  printf("checksum = %X\n", v_q[0]);

  return 0;
}