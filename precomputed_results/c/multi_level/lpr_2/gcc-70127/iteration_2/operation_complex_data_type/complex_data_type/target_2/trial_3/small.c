#include <stdio.h>

unsigned int u;
struct p {
  int ab;
  int q : 22;
} v[1];

int main() {
  struct p a = {8L, 666};

  int ab_w = 0x1C87E74F;
  int q_w = 816;

  for (; u <= 1; u += 1) {
    a.ab = v[0].ab = ab_w;
    v[0].q = q_w;
  }

  printf("checksum = %X\n", v[0].q);
  return 0;
}