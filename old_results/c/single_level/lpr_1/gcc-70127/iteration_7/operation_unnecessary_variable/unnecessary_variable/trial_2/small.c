#include <stdio.h>

struct p {
  int ab;
  signed q : 22;
};

unsigned j;
unsigned u;
struct p v[1];
struct p w = {0x1C87E74F, 816};

int main() {
  int i;
  struct p a = {8, 666};

  for (; u <= 1; u += 2) {
    v[0] = w;
    a = v[0];
  }

  for (i = 0; i < 1; i++)
    j = v[i].q;

  printf("checksum = %X\n", j);

  return 0;
}