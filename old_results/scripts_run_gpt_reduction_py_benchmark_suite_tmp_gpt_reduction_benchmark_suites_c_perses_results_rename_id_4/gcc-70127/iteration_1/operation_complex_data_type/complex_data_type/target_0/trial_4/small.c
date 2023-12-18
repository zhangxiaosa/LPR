#include <stdio.h>

unsigned u;
int ab_v[1];
int q_v[1];
int ab_w = 0x1C87E74F;
int q_w = 816;

int main() {
  int ab_a = 0x1C87E74F;
  int q_a = 666;

  for (; u <= 1; u += 1) {
    ab_a = ab_v[0] = ab_w;
    q_a = q_v[0] = q_w;
  }

  printf("checksum = %X\n", q_v[0]);
  return 0;
}