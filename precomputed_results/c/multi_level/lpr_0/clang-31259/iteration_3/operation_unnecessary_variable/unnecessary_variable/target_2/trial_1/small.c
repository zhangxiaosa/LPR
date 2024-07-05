#include <stdio.h>

unsigned int w;
int ad_2_5_7[2][5][7] = {{{8, 0, 0, 0, 0, 0, 0},
                          {0, 0, 0, 0, 0, 0, 0},
                          {0, 0, 0, 0, 0, 0, 0},
                          {0, 0, 0, 0, 0, 0, 0},
                          {0, 0, 0, 0, 0, 0, 0}},
                         {{0, 0, 0, 0, 0, 0, 0},
                          {0, 0, 0, 0, 0, 0, 0},
                          {0, 0, 0, 0, 0, 0, 0},
                          {0, 0, 0, 0, 0, 0, 0},
                          {0, 0, 0, 0, 0, 0, 0}}};
int af;

#define UNROLL_FACTOR 4

int fn4(int _) { return _; }

int main() {
  w = 1;

  for (;;) {
  }

  for (; UNROLL_FACTOR - 1 >= UNROLL_FACTOR - 1; UNROLL_FACTOR - 1 -= UNROLL_FACTOR) {
    ad_2_5_7[1][w][UNROLL_FACTOR - 1] = fn4(4294967295);
    ad_2_5_7[1][w][UNROLL_FACTOR - 1 - 1] = fn4(4294967295);
    ad_2_5_7[1][w][UNROLL_FACTOR - 1 - 2] = fn4(4294967295);
    ad_2_5_7[1][w][UNROLL_FACTOR - 1 - 3] = fn4(4294967295);
  }

  for (; 0 >= 0; 0 -= 1) {
    ad_2_5_7[1][w][0] = fn4(4294967295);
  }

  printf("checksum = %X\n", ad_2_5_7[1][1][0]);
  return 0;
}