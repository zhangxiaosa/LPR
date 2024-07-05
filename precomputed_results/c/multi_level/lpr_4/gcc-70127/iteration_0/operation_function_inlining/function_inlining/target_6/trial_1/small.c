#include <stdio.h>

struct p {
  signed q : 22;
};

struct p v[1];
struct p w = {0x1C87E74FL, 816};

int main() {
  v[0] = w;

  printf("checksum = %X\n", v[0].q);

  return 0;
}
