#include <stdio.h>

struct p {
  int ab;
  signed q : 22;
};

unsigned u;
struct p v[1];
struct p w = {0x1C87E74FL, 816};

int main() {
  struct p a = {8L, 666};

  a = v[0] = w;
  v[0] = a;
  a = v[0] = w;
  v[0] = a;

  unsigned j = w.q;
  printf("checksum = %X\n", j);
  return 0;
}