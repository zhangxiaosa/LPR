#include <stdio.h>

unsigned u;

int ab;
signed q;

int main() {
  ab = 8L;
  q = 666;

  for (; u <= 1; u += 1) {
    ab = 0x12345678;
    q = 999;

    int temp_ab = ab;
    signed temp_q = q;

    ab = temp_ab;
    q = temp_q;
  }

  unsigned checksum = q;

  printf("checksum = %X\n", checksum);

  return 0;
}