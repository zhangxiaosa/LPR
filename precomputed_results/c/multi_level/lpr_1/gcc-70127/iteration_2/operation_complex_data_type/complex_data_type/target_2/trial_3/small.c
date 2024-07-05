#include <stdio.h>

unsigned u;

int ab;
signed int q;

p v[1];
p w = {0x12345678, 999};

int main() {
  int ab_a = 8L;
  signed int q_a = 666;

  for (; u <= 1; u += 1) {
    ab_a = v[0].ab = w.ab;
    q_a = v[0].q = w.q;
  }

  unsigned checksum = v[0].q;

  printf("checksum = %X\n", checksum);

  return 0;
}