#include <stdio.h>

int ad_2_5_7[2][5][7];

#define UNROLL_FACTOR 4

int fn4(int _) { return _; }

int main() {
  for (; af >= UNROLL_FACTOR - 1; af -= UNROLL_FACTOR) {
    ad_2_5_7[1][1][af] = 4294967295;
    ad_2_5_7[1][1][af - 1] = 4294967295;
    ad_2_5_7[1][1][af - 2] = 4294967295;
    ad_2_5_7[1][1][af - 3] = 4294967295;
  }

  for (; af >= 0; af -= 1) {
    ad_2_5_7[1][1][af] = 4294967295;
  }

  printf("checksum = %X\n", ad_2_5_7[1][1][0]);
  return 0;
}