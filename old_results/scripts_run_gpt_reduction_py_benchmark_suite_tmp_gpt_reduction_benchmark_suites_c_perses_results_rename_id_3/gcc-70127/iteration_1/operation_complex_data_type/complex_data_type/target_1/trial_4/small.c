#include <stdio.h>

unsigned u;
signed ab;
signed q;
struct p {
  signed ab;
  signed q;
};

struct p v[1];
struct p w_init = {0x1C87E74FL, 816};

int main() {
  struct p a;

  a.ab = 8;
  a.q = 666;

  for (; u <= 1; u += 1) {
    a = v[0] = w_init;
    v[0] = a;
  }

  unsigned j;
  j = v[0].q;

  printf("checksum = %X\n", j);

  return 0;
}