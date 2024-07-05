#include <stdio.h>

unsigned int u;

struct p {
  int ab;
  int q : 22;
};

struct p v[1];
int w_ab;
int w_q;

int main() {
  struct p a = {0x1C87E74F, 666};

  w_ab = 0x1C87E74F;
  w_q = 816;

  for (; u <= 1; u += 1) {
    a = v[0];
    v[0].ab = w_ab;
    v[0].q = w_q;
  }

  printf("checksum = %X\n", v[0].q);

  return 0;
}