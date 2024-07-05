#include <stdio.h>

int fn4(int p1, int _) {
  return _;
}

int s;
unsigned w;
int ad[][5][7] = {{8}, 8};
int af;
int main() {
  for (w = 1;;) {
    for (; af;)
      ;
    // Unrolled loop with 4 iterations
    ad[1][w][af] = fn4(1, 4294967295);
    ad[1][w][af - 1] = fn4(1, 4294967295);
    ad[1][w][af - 2] = fn4(1, 4294967295);
    ad[1][w][af - 3] = fn4(1, 4294967295);

    break;
  }
  s ^= ad[1][1][0];
  printf("checksum = %X\n", s);
  return 0;
}