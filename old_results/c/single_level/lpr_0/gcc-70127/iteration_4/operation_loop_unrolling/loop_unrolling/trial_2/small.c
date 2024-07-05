#include <stdio.h>

unsigned j;

struct p {
  int ab;
  signed q : 22;
};

unsigned u;

struct p v[1];

struct p w = {0x1C87E74F, 816};

int main() {
  struct p a = {8L, 666};

  a = v[0] = w;
  v[0] = a;

  j = v[0].q;
  printf("checksum = %X\n", j);
  return 0;
}