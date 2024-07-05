#include <stdio.h>

struct p {
  int ab;
  int q: 22;
};

unsigned j;
unsigned u;
struct p v[1];
struct p w = {0x1C87E74Fu, 816u};

void print_checksum(checksum) {
  printf("checksum = %X\n", checksum);
}

int main() {
  for (; u <= 1; u += 1) {
    v[0] = w;
  }

  j = v[0].q;
  print_checksum(j);
  return 0;
}
