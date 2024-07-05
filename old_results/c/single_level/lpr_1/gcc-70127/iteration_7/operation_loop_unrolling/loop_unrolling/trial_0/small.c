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

  // Unrolled loop iteration 1
  u = 0;
  a = v[0] = w;
  v[0] = a;

  // Unrolled loop iteration 2
  u = 2;
  a = v[0] = w;
  v[0] = a;

  // Access value directly without loop
  j = v[0].q;

  printf("checksum = %X\n", j);
  return 0;
}