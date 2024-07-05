#include <stdio.h>

static int w = 254;
int ad1[][5][7] = {{8}, {8}, {{8}, 0x98}};

int fn9() {
  int ai[2];
  int s, af;

  ai[0] = 8;
  ai[1] = 8;

  for (af = 6; af >= 0; --af) {
    ad1[w + 1][w][af] = fn4(1, 4294967295);
  }

  s = ad1[2][1][0];
  printf("s_unrolled_iter_1 = %X\n", s);

  return 0;
}

int main() {
  fn9();
  return 0;
}