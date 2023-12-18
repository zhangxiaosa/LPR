#include <stdio.h>

unsigned int u;

struct p {
  int ab;
  int q : 22;
};

struct p v[1];

int main() {
  struct p a = {0x1C87E74F, 666};

  int ab = 0x1C87E74F;
  int q = 816;

  for (; u <= 1; u += 1) {
    a.ab = v[0].ab = w_ab;
    v[0].q = a.q = v_q;
  }

  printf("checksum = %X\n", v[0].q);

  return 0;
}