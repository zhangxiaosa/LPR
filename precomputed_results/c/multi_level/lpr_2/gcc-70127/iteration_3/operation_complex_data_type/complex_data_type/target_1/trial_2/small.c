#include <stdio.h>

int u;
int v_ab;
int v_q;
int w_ab = 0x1C87E74F;
int w_q = 816;
int a_ab;
int a_q;

int main() {
  a_ab = 8;
  a_q = 666;

  for (; u <= 1; u += 1) {
    a_ab = v_ab = w_ab;
    v_q = w_q;
  }

  printf("checksum = %X\n", v_q);
  return 0;
}