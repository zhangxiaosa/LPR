#include <stdio.h>

int fn3(int p1, int p2) {
  return 1;
}

int u;
int v;
static int w = 254;

int ad1_0 = 8;
int ad1_1 = 8;
int ad1_2 = 8;
int ad1_3 = 0x98;

int af;

int fn4(int p1, int p2) {
  return p1 % p2;
}

int fn9() {
  int ai[2];
  int i;

  for (i = 0; i < 2; i++)
    ai[i] = 8;

  for (w = 1;;) {
    for (; i < 3; i += 4)
      ;

    for (af = 6; af >= 0; af -= 1) {
      v = ai[0] ^= ad1_0 = fn4(fn3(1, u--), 4294967295);
      v = ai[0] ^= ad1_1 = fn4(fn3(1, u--), 4294967295);
      v = ai[0] ^= ad1_2 = fn4(fn3(1, u--), 4294967295);
      v = ai[0] ^= ad1_3 = fn4(fn3(1, u--), 4294967295);
    }
    return 0;
  }
}

int main() {
  fn9();

  int s;
  s = ad1_2;
  printf("s_unrolled_iter_1 = %X\n", s);

  return 0;
}