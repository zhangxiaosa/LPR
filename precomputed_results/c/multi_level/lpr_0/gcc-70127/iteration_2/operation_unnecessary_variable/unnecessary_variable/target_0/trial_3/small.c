#include <stdio.h>

struct p {
  int ab;
  signed q : 22;
};

struct p v[1];
struct p w = {0x1C87E74FL, 816};

int main() {
  for (;;) {
    v[0] = w;
  }
  int j = v[0].q;
  printf("checksum = %X\n", j);
  return 0;
}