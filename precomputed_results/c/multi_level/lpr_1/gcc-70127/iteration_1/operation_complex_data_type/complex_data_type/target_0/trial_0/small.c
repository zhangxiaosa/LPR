#include <stdio.h>

unsigned j;
unsigned u;
int ab_v0;
signed q_v0;
int ab_w = 0x12345678;
signed q_w = 999;

int main() {
  int ab_a = 8;
  signed q_a = 666;

  for (; u <= 1; u += 1) {
    ab_v0 = ab_w;
    q_v0 = q_w;
    ab_a = ab_v0 = ab_v0;
    q_a = q_v0 = q_v0;
  }

  j = q_v0;

  printf("checksum = %X\n", j);

  return 0;
}