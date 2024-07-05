#include <stdio.h>

struct p {
  int ab;
  signed q: 22;
};

int u;
int v_ab;
signed v_q;
int w_ab = 0x1C87E74F;
signed w_q = 816;

int main() {
  struct p a = {8L, 666};
  for (; u <= 1; u += 1) {
    a = v[0] = w;
    v[0] = a;
  }
  int j = v[0].q;
  printf("checksum = %X\n", j);
  return 0;
}