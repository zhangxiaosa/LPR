#include<stdio.h>\n\nint fn3(int p1, int p2) { return p1; }
int fn4(int p1, int p2) { return p1 % p2; }
unsigned fn5(unsigned p1, unsigned p2) { return p1; }

int af;
unsigned u;
int v;
static unsigned w = 254U;

int main() {
  int ad_0_0_0 = 8;
  int ad_1_0_0 = 8;
  int ad_2_0_0 = 8;
  int ad_2_0_1 = 0x98;

  int ai[2];
  int i;

  for (i = 0; i < 2; i++)
    ai[i] = 8;

  for (w = 1;;) {
    for (; i < 5; i++);
    for (af = 6; af >= 0; af -= 1)
      v = ai[0] ^= ad_2_0_1 = fn4(fn3(1, fn5(255U, --u)), 4294967295U);

    return v;
  }

  int i, j, k;
  fn9();

  for (i = 0; i < 7; i++)
    for (j = 0; j < 5; j++)
      for (k = 0; k < 6; k += 2)
        printf("checksum = %X\n", ad[i][j][k]);

  return 0;
}