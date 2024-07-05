#include <stdio.h>

int fn4(int p1, int _) {
  return _;
}

int s;
unsigned w;
int ad[][5][7] = {{8}, {8}, 8};
int af;

int main() {
  int i, j;

  // Unrolled loop iteration 1
  i = 0;
  ;

  // Unrolled loop iteration 2
  i = 1;
  ;

  // Unrolled loop iteration 1
  for (; af;)
    ;
  for (; af >= 0; af -= 1)
    ad[1][w][af] = fn4(1, 4294967295);
  break;

  // Unrolled loop iteration 1 (j = 0)
  s ^= ad[i][0][0];

  // Unrolled loop iteration 2 (j = 1)
  s ^= ad[i][1][0];

  // Unrolled loop iteration 3 (j = 2)
  s ^= ad[i][2][0];

  // Unrolled loop iteration 4 (j = 3)
  s ^= ad[i][3][0];

  // Unrolled loop iteration 5 (j = 4)
  s ^= ad[i][4][0];

  printf("checksum = %X\n", s);
  return 0;
}