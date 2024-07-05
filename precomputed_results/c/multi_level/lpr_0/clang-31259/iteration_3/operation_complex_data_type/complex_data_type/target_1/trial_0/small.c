#include <stdio.h>

unsigned int w;
int af;
int main() {
  w = 1;
  for (; af;) {
  }

  // Unrolled loop
  for (; af >= 3; af -= 4) {
    ad[1][w][af] = w;
    ad[1][w][af - 1] = w;
    ad[1][w][af - 2] = w;
    ad[1][w][af - 3] = w;
  }

  // Remaining iterations
  for (; af >= 0; af -= 1) {
    ad[1][w][af] = w;
  }

  printf("checksum = %X\n", ad[1][1][0]);
  return 0;
}