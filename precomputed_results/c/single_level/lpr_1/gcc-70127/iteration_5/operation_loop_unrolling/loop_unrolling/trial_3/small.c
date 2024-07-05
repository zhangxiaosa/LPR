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

  // Loop unrolling
  p2 = 0;
  u = 0;

  // Unrolled loop 1
  a = v[p2] = w;
  v[p2] = a;

  // Unrolled loop 2
  a = v[p2] = w;
  v[p2] = a;

  // Loop unrolling ends

  for (i = 0; i < 1; i++)
    j = v[i].q;

  printf("checksum = %X\n", j);
  return 0;
}