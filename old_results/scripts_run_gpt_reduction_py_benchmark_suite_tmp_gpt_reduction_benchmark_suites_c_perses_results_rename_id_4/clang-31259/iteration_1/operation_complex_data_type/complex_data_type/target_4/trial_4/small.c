#include <stdio.h>

signed ad1[][5][7] = {{8}, {8}, {{8}, 0x98}};

short ae;

int fn9() {
  int ai[2];
  int i;
  for (i = 0; i < 2; i++)
    ai[i] = 8;
  for (int af = 6; af >= 0; af -= 1)
    ai[0] ^= ad1[2][0][af] = 1 % 4294967295;
  return ae;
}

int main() {
  fn9();
  printf("s_unrolled_iter_1 = %X\n", ad1[2][0][0]);
  return 0;
}