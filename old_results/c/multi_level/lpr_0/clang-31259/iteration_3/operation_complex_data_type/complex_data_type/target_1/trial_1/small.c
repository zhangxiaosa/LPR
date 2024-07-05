#include <stdio.h>

int fn4(int _) { return _; }
unsigned int w;
int ad_0_0_0 = 8;
int ad_0_1_0 = 8;
int af;

#define UNROLL_FACTOR 4

int main() {
  w = 1;
  for (; af;) {
  }

  // Unrolled loop
  for (; af >= UNROLL_FACTOR - 1; af -= UNROLL_FACTOR) {
    ad_1_w_af = fn4(4294967295);
    ad_1_w_af_minus_1 = fn4(4294967295);
    ad_1_w_af_minus_2 = fn4(4294967295);
    ad_1_w_af_minus_3 = fn4(4294967295);
  }

  // Remaining iterations
  for (; af >= 0; af -= 1) {
    ad_1_w_af = fn4(4294967295);
  }

  printf("checksum = %X\n", ad_1_1_0);
  return 0;
}