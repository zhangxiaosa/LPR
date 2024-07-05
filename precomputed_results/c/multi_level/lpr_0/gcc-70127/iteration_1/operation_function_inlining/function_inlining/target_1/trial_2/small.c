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
  u = 0; // Initialize u to 0
  v[0] = w;
  printf("checksum = %X\n", v[0].q);
  return 0;
}