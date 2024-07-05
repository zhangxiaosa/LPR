#include <stdio.h>

struct p {
  int ab;
  int q : 22;
};

unsigned u = 1; // Optimized initialization

struct p w = {0x1C87E74Fu, 816u};

void print_checksum(unsigned checksum) { printf("checksum = %X\n", checksum); }

int main() {
  struct p a = {8L, 666};

  for (; u <= 1; u += 1) {
    a = w;
  }

  print_checksum(a.q);

  return 0;
}