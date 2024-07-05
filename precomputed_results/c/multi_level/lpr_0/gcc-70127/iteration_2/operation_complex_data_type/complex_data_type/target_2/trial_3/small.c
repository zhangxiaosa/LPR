#include <stdio.h>

int ab;
signed int q;

int u;

int main() {
  ab = 8;
  q = 666;

  for (; u <= 1; u += 1) {
    ab = 0x1C87E74F;
    q = 816;
  }

  int j = q;

  printf("checksum = %X\n", j);

  return 0;
}