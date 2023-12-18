#include <stdio.h>

unsigned j;
unsigned u;
int v_ab[1];
int v_q[1];
int w_ab = 0x1C87E74F;
int w_q = 816;

void print_checksum(unsigned checksum) {
  printf("checksum = %X\n", checksum);
}

int main() {
  int a_ab = 8L;
  int a_q = 666;

  for (; u <= 1; u += 1) {
    v_ab[0] = w_ab;
    v_q[0] = w_q;
    a_ab = v_ab[0] = w_ab;
    a_q = v_q[0] = w_q;
  }

  j = v_q[0];
  print_checksum(j);

  return 0;
}
