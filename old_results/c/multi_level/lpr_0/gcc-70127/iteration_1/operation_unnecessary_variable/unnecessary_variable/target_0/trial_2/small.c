#include <stdio.h>

struct p {
  int ab;
  signed q : 22;
};

int u;
struct p v[1];
struct p w = {0x1C87E74FL, 816};

int main() {
  for (; u <= 1; u += 1) {
    v[0] = w;
  }

  printf("checksum = %X\n", v[0].q);
  return 0;
}
