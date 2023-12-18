#include <stdio.h>

struct p {
  int ab;
  int q : 22;
};

unsigned j;
unsigned u;
struct p v[1];
struct p w = {0x1C87E74Fu, 816u};

void print_checksum(unsigned checksum) {
  printf("checksum = %X\n", checksum);
}

int main() {
  struct p a = {8L, 666};

  // Set initial value for u
  u = 0;

  // First iteration
  a = v[0] = w;
  v[0] = a;

  // Second iteration
  a = v[0] = w;
  v[0] = a;

  // After loop
  j = v[0].q;
  print_checksum(j);

  return 0;
}
