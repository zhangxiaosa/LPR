#include <stdio.h>

int fn4(_) { return _; }
unsigned w;
int ad[][5][7] = {{8}, 8};
int af;

#define UNROLL_FACTOR 4

int main() {
  w = 1;

  // Unrolled loop
  for (; af >= UNROLL_FACTOR - 1; af -= UNROLL_FACTOR) {
    ad[1][w][af] = fn4(4294967295);
    ad[1][w][af - 1] = fn4(4294967295);
    ad[1][w][af - 2] = fn4(4294967295);
    ad[1][w][af - 3] = fn4(4294967295);
    
    ad[1][w][af - 4] = fn4(4294967295);
    ad[1][w][af - 5] = fn4(4294967295);
    ad[1][w][af - 6] = fn4(4294967295);
    ad[1][w][af - 7] = fn4(4294967295);
    
    ad[1][w][af - 8] = fn4(4294967295);
    ad[1][w][af - 9] = fn4(4294967295);
    ad[1][w][af - 10] = fn4(4294967295);
    ad[1][w][af - 11] = fn4(4294967295);
    
    ad[1][w][af - 12] = fn4(4294967295);
    ad[1][w][af - 13] = fn4(4294967295);
    ad[1][w][af - 14] = fn4(4294967295);
    ad[1][w][af - 15] = fn4(4294967295);
  }

  // Remaining iterations
  for (; af >= 0; af -= 1) {
    ad[1][w][af] = fn4(4294967295);
  }

  printf("checksum = %X\n", ad[1][1][0]);
  return 0;
}