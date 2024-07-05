#include <stdio.h>

int ab_v;
signed int q_v;

int u;

int ab_w = 0x1C87E74F;
signed int q_w = 816;

int main() {
  int ab_a = 8;
  signed int q_a = 666;

  for (; u <= 1; u += 1) {
    ab_a = ab_v = ab_w;
    q_a = q_v = q_w;
  }

  int j = q_v;

  printf("checksum = %X\n", j);

  return 0;
}