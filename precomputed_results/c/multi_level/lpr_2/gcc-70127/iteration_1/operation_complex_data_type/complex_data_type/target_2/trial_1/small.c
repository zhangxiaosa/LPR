#include <stdio.h>

unsigned j;
unsigned u;
int v_ab;
int v_q;
int w_ab = 0x1C87E74F;
unsigned w_q = 816;

void print_checksum(int checksum) {
  printf("checksum = %X\n", checksum);
}

int main() {
  int a_ab = 8L;
  int a_q = 666;

  for (; u <= 1; u += 1) {
    a_ab = v_ab = w_ab;
    a_q = v_q = w_q;
  }

  j = v_q;
  print_checksum(j);

  return 0;
}