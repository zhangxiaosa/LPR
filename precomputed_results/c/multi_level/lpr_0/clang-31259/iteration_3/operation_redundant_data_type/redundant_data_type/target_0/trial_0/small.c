#include <stdio.h>

int main() {
  int w;
  int ad[][5][7] = {{8}, 8};

  w = 1;
  for (; af;) {
  }

  // Unrolled loop
  for (; af >= UNROLL_FACTOR - 1; af -= UNROLL_FACTOR) {
    ad[1][w][af] = 4294967295;
    ad[1][w][af - 1] = 4294967295;
    ad[1][w][af - 2] = 4294967295;
    ad[1][w][af - 3] = 4294967295;
  }

  // Remaining iterations
  for (; af >= 0; af -= 1) {
    ad[1][w][af] = 4294967295;
  }

  printf("checksum = %d\n", ad[1][1][0]);
  return 0;
}