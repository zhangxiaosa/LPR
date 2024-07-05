#include <stdio.h>

struct p {
  int ab;
  signed q : 22;
};

int u;

struct p v[1];

int main() {
  struct p a = {8L, 666};

  int w_ab = 0x1C87E74F;
  signed int w_q = 816;

  for (; u <= 1; u += 1) {
    a = v[0] = (struct p){w_ab, w_q};
    v[0] = a;
  }

  int j = v[0].q;

  printf("checksum = %X\n", j);

  return 0;
}