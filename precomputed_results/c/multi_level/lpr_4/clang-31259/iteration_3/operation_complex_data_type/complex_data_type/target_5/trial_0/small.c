#include <stdio.h>

int u;
int v;
static int w = 254;
int ad1_1 = 8;
int ad1_2 = 8;
int ad1_3 = 8;
int ad1_4 = 0x98;
int ad1_5[2][5][7];
int af;

int fn3(int p1, int p2) { return 1; }

int fn4(int p1, int p2) { return p1 % p2; }

int fn9() {
  int ai[2];
  int i;

  for (i = 0; i < 2; i++) {
    ai[i] = 8;
  }

  for (w = 1;;) {
    for (; i < 3; i += 4)
      ;
    for (af = 6; af >= 0; af -= 1) {
      v = ai[0] ^= ad1_5[w + 1][w][af] = fn4(fn3(1, u--), 4294967295);
    }

    return 0;
  }
}

int main() {
  fn9();
  int s;

  s = ad1_5[2][1][0];

  printf("s_unrolled_iter_1 = %X\n", s);

  return 0;
}