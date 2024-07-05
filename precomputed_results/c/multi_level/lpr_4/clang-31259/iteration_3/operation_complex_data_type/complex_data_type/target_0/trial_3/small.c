#include <stdio.h>

int fn3(p1, p2) { return 1; }
int u;
int v;
static int w = 254;
int af;

int fn4(p1, p2) { return p1 % p2; }

int fn9() {
  int ai[2];
  int i;
  int ad1_0_0_0 = 8;
  int ad1_1_0_0 = 8;
  int ad1_2_0_0 = 8;
  int ad1_2_0_1 = 0x98;

  for (i = 0; i < 2; i++)
    ai[i] = 8;

  for (w = 1;;) {
    for (; i < 3; i += 4)
      ;

    for (af = 6; af >= 0; af -= 1)
      v = ai[0] ^= ad1_2_0_1 = fn4(fn3(1, u--), 4294967295);

    return 0;
  }
}

int main() {
  fn9();
  int s;
  int ad1_2_1_0 = 8;  // Retrieve the value from ad1[2][1][0]
  int ad1_2_1_1 = 0;

  int s = ad1_2_1_0;  // Store the value in s
  printf("s_unrolled_iter_1 = %X\n", s);
  return 0;
}