#include <stdio.h>

unsigned int u;

struct p {
  int ab;
  int q : 22;
};

struct p v[1];

int main() {
  struct p a = {0x1C87E74F, 666};
  int w_ab = 481970799;
  int w_q = 816;

  for (; u <= 1; u += 1) {
    a = v[0] = w;
    v[0] = a;
  }

  printf("checksum = %X\n", v[0].q);

  return 0;
}