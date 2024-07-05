#include <stdio.h>

int fn4(_) { return _; }
unsigned w;

int ad_0_0_0 = 8;
int ad_0_1_0 = 0;
int ad_0_1_1 = 0;
int ad_0_1_2 = 0;
int ad_0_1_3 = 0;
int ad_0_1_4 = 0;
int ad_1_0_0 = 8;
int ad_1_0_1 = 8;
int ad_1_0_2 = 8;
int ad_1_0_3 = 8;
int ad_1_0_4 = 8;
int ad_1_0_5 = 8;
int ad_1_0_6 = 8;

#define UNROLL_FACTOR 4

int main() {
  w = 1;
  for (; af;) {
  }

  // Unrolled loop
  for (; af >= UNROLL_FACTOR - 1; af -= UNROLL_FACTOR) {
    ad_1_0[(w)][(af)] = fn4(4294967295);
    ad_1_0[(w)][(af - 1)] = fn4(4294967295);
    ad_1_0[(w)][(af - 2)] = fn4(4294967295);
    ad_1_0[(w)][(af - 3)] = fn4(4294967295);
  }

  // Remaining iterations
  for (; af >= 0; af -= 1) {
    ad_1_0[(w)][(af)] = fn4(4294967295);
  }

  printf("checksum = %X\n", ad_1_1_0);
  return 0;
}