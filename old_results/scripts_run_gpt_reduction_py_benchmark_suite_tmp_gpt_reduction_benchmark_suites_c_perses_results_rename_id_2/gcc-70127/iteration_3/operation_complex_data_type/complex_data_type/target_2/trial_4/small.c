#include <stdio.h>

unsigned int w_ab = 0x1C87E74F;
int w_q = 816;

int main() {
  struct p {
    int ab;
    int q : 22;
  };

  int u;
  struct p v[1];

  struct p w = {w_ab, w_q};

  struct p a = {8, 666};
  for (; u <= 1; u += 1) {
    a = v[0] = w;
    v[0] = a;
  }

  printf("checksum = %X\n", v[0].q);

  return 0;
}