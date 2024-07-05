#include <stdio.h>

unsigned int u;
int ab;
int q;
int w_ab = 0x1C87E74F;
int w_q = 816;
int v_ab, v_q;
int a_ab = 0x1C87E74F;
int a_q = 666;

int main() {
  int i;
  for (u = 0; u <= 1; u += 1) {
    v_ab = w_ab;
    v_q = w_q;
    a_ab = w_ab;
    a_q = w_q;
  }

  printf("checksum = %X\n", v_q);
  return 0;
}