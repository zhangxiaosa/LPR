#include <stdio.h>

int fn3(int p1, int p2) {
  return 1;
}

int u;
int v;
static int w = 254;
int ad1[][5][7] = {{8}, {8}, {{8}, 0x98}};
int af;
int fn4(int p1, int p2) {
  return p1 % p2;
}

int main() {
  int i;
  for (i = 0; i < 2; i++)
    ad1[w + 1][w][af--] = fn4(fn3(1, u--), 4294967295);
  int s;
  s = ad1[2][1][0];
  printf("s_unrolled_iter_1 = %X\n", s);
  return 0;
}
