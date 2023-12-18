#include <stdio.h>

struct p {
  int ab;
  int q : 22;
};

unsigned u;
struct p v[1];
struct p w = {0x1C87E74Fu, 816u};

void print_checksum(unsigned checksum) { printf("checksum = %X\n", checksum); }

int main() {
  struct p a = {8L, 666};

  for (; u <= 1; u += 1) {
    a = v[0] = w;
    v[0] = a;
  }

  print_checksum(v[0].q);

  return 0;
}