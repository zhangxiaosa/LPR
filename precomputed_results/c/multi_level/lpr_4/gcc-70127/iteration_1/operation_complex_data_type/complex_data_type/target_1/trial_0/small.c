#include <stdio.h>

unsigned int u;

struct p {
  int ab;
  int q : 22;
};

struct p v[1];
struct p w = {0x1C87E74F, 816};

int main() {
  int a_ab = 0x1C87E74F;
  int a_q = 666;

  for (; u <= 1; u += 1) {
    v[0].ab = a_ab;
    v[0].q = a_q;
    a_ab = w.ab;
    a_q = w.q;
  }

  printf("checksum = %X\n", v[0].q);

  return 0;
}