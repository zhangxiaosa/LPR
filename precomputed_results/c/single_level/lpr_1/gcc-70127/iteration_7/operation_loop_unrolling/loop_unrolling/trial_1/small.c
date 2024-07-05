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

  // Loop unrolling for loop:
  a = v[0] = w;
  v[0] = a;
  
  a = v[0] = w;
  v[0] = a;

  for (i = 0; i < 1; i++)
    j = v[i].q;

  printf("checksum = %X\n", j);
  
  return 0;
}