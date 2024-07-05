#include <stdio.h>

void optimized_fn9() {
  int ai[2];

  for (int j = 0; j < 2; j++)
    ai[j] = 8;

  while (1) {
    for (int af = 6; af >= 0; af -= 1)
      ai[0] ^= (8 = 3 % 1);
  }
}

int main() {
  optimized_fn9();
  printf("checksum = %x\n", 0x98);
  return 0;
}