#include <stdio.h>

int fn4(int p1, int _) { return _; }

int s;
int ad[][5][7] = {{8}, {8}, 8};
int af;

int main() {
  int i, j;

  i = 0;
  ;

  i = 1;
  ;

  // Unrolled loop iteration 1
  af = 0;
  ad[1][w][af] = fn4(1, 4294967295);
  af++;

  // Unrolled loop iteration 2
  af = 0;
  ad[1][w][af] = fn4(1, 4294967295);
  af++;

  // Unrolled loop iteration 3
  af = 0;
  ad[1][w][af] = fn4(1, 4294967295);
  af++;

  // Unrolled loop iteration 4
  af = 0;
  ad[1][w][af] = fn4(1, 4294967295);
  af++;

  // Unrolled loop iteration 5
  af = 0;
  ad[1][w][af] = fn4(1, 4294967295);
  af++;

  s ^= ad[i][0][0];
  s ^= ad[i][1][0];
  s ^= ad[i][2][0];
  s ^= ad[i][3][0];
  s ^= ad[i][4][0];

  printf("checksum = %X\n", s);
  return 0;
}