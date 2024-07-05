#include <stdio.h>

void fn1(unsigned p1, int p2) { printf("checksum = %X\n", p1); }

unsigned j;

struct p {
  int ab;
  signed q : 22;
};

unsigned u;
struct p v[1];
struct p w = {0x1C87E74F, 816};

int main() {
  int i;
  struct p a = {8L, 666};
  signed p2;

  p2 = 0;
  u = 0;

  a = v[p2] = w;
  v[p2] = a;

  u += 1;

  a = v[p2] = w;
  v[p2] = a;

  u += 1;

  for (i = 0; i < 1; i++)
    j = v[i].q;

  fn1(j, 0);
  return 0;
}