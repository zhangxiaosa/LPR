#include <stdio.h>

int fn3(int p1, int p2) { return 1; }
int fn4(int p1, int p2) { return 1 % p2; }

int p1, p2;
int fn3_result;
int fn4_result;

int s;
int u;
int v;
static int w;

signed ad_var1, ad_var2, ad_var3, ad_var4, ad_var5, ad_var6;

short ae;
int af;

int fn9() {
  int ai[2];
  int i;

  for (i = 0; i < 2; i++)
    ai[i] = 8;

  for (w = 1;;) {
    for (; i < 5; i += 2)
      ;

    for (af = 6; af >= 0; af -= 1)
      v = ai[0] ^= ad_var6 = fn4_result;

    return ae;
  }
}

int main() {
  int j;

  fn9();

  for (j = 0; j < 5; j++)
    s = s ^ ad_var3;

  printf("s_unrolled_iter_1 = %X\n", s);

  return 0;
}
