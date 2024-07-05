#include <stdio.h>

int fn4(int p1, int _) {
  return _;
}

int s;
unsigned w;
int ad[][5][7] = {{8}, 8};
int af;

int main() {
  // Unrolled loop iterations
  for (; af;)
    ;

  for (; af >= 0; af -= 1) {
    ad[1][1][af] = fn4(1, 4294967295);
    ad[1][2][af] = fn4(1, 4294967295);
    ad[1][3][af] = fn4(1, 4294967295);
    // ... replicate above line `N` times
    // ad[1][N][af] = fn4(1, 4294967295);
  }

  s ^= ad[1][1][0];
  printf("checksum = %X\n", s);

  return 0;
}