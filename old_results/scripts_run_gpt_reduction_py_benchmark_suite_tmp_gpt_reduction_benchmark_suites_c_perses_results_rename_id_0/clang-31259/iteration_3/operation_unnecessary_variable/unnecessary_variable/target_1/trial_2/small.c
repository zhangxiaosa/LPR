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

  for (; af;) {
  }

  for (; af >= UNROLL_FACTOR - 1; af -= UNROLL_FACTOR) {
    fn4(4294967295);
    fn4(4294967295);
    fn4(4294967295);
    fn4(4294967295);
  }

  for (; af >= 0; af -= 1) {
    fn4(4294967295);
  }

  printf("checksum = %X\n", fn4(4294967295));
  return 0;
}