#include <stdio.h>

struct p {
  signed ab;
  signed q : 22;
};

unsigned u = 0;
struct p v[1];
struct p w_init = {0x1C87E74FL, 816};

int main() {
  struct p a = {8, 666};

  // Unrolled loop iterations
  struct p p2;
  p2 = 0;
  p2 -= 1;

  unsigned j = v[0].q;
  printf("checksum = %X\n", j);

  return 0;
}