#include<stdio.h>

struct p {
  int ab;
  int q : 22;
};

unsigned int u = 0;
struct p v[1];

unsigned int w_ab = 0x1C87E74F;
int w_q = 816;

int main() {
  struct p a = {8L, 666};

  for (; u <= 1; u += 1) {
    a = v[0] = {w_ab, w_q};
    v[0] = a;
  }

  printf("checksum = %X\n", v[0].w_q);
  return 0;
}