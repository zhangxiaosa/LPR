#include <stdio.h>

int fn3(int p1, int p2) { return 1; }

int u;

static int w = 254;

int ad1[][5][7] = {{8}, {8}, {{8}, 0x98}};

int af;

int fn4(int p1, int p2) { return p1 % p2; }

int fn9() {
  int ai_0 = 8;
  int ai_1 = 8;
  int i;

  for (i = 0; i < 1; i++) {
    ai_0 = 8;
    ai_1 = 8;
  }

  for (w = 1;;) {
    for (; i < 3; i += 4)
      ;
    for (af = 6; af >= 0; af -= 1) {
      v = ai_0 ^= ad1[w + 1][w][af] = fn4(fn3(1, u--), 4294967295);
    }

    return 0;
  }
}

int main() {
  fn9();
  int s;
  s = ad1[2][1][0];
  printf("s_unrolled_iter_1 = %d\n", s);
  return 0;
}