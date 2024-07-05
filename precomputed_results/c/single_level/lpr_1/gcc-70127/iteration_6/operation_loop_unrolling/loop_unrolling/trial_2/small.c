#include <stdio.h>

unsigned j;

struct p {
  int ab;
  signed q : 22;
};

unsigned u;

struct p v[1];

struct p w = {0x1C87E74FL, 816};

int main() {
  int i;
  struct p a = {8L, 666};
  signed p2;

  p2 = 0;
  u = 0;
  v[p2] = w;

  p2 -= 1;
  u += 2;
  v[p2] = w;

  i = 0;
  j = v[i].q;

  printf("checksum = %X\n", j);

  return 0;
}