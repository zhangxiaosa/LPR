#include <stdio.h>

int fn4(_) { return _; }
unsigned w;
int ad_0_0_0 = 8;
int ad_0_1_0 = 8;
int ad_1_0_0 = 4294967295;
int ad_1_0_1 = 4294967295;
int ad_1_0_2 = 4294967295;
int ad_1_0_3 = 4294967295;
int ad_1_1_0 = 4294967295;

#define UNROLL_FACTOR 4

int main() {
  w = 1;
  for (; af;) {
  }

  // Unrolled loop
  for (; af >= UNROLL_FACTOR - 1; af -= UNROLL_FACTOR) {
    ad_1_0_0 = fn4(4294967295);
    ad_1_0_1 = fn4(4294967295);
    ad_1_0_2 = fn4(4294967295);
    ad_1_0_3 = fn4(4294967295);
  }

  // Remaining iterations
  for (; af >= 0; af -= 1) {
    ad_1_1_0 = fn4(4294967295);
  }

  printf("checksum = %X\n", ad_1_1_0);
  return 0;
}