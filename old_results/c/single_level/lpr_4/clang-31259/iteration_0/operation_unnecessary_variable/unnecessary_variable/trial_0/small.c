#include <stdio.h>

void fn1(unsigned p1) {
  printf("checksum = %X\n", p1);
}

signed fn2(signed p1) {
  return p1;
}

short fn3(short p1) {
  return p1;
}

int fn4(int p1, int p2) {
  return p1 % p2;
}

unsigned fn5(unsigned p1) {
  return p1;
}

unsigned s;
void fn6(unsigned p1) {
  s = s ^ p1;
}

void fn7(unsigned p1) {
  fn6(p1);
}

unsigned u;
int v;
static unsigned w = 254U;

signed ad[7][5][7] = { { { 8 } }, { { 8 } }, { { { 8 }, 0x98 } } };

signed fn9() {
  unsigned ah = 3U;

  int i;
  int ai[2];
  for (i = 0; i < 2; i++) {
    ai[i] = 8;
  }

  for (w = 1;;) {
    for (; i < 5; i++) {
      // Empty loop body.
    }

    int af;
    for (af = 6; af >= 0; af -= 1) {
      v = ai[0] ^= ad[w + 1][w][af] = fn4(fn3(1), 4294967295U);
    }

    return ad[0][0][1];
  }
}

int main() {
  unsigned p1 = 0;
  fn9();

  int i, j, k;
  for (i = 0; i < 7; i++) {
    for (j = 0; j < 5; j++) {
      for (k = 0; k < 7; k++) {
        fn7(ad[i][j][k]);
      }
    }
  }
  
  fn1(p1);
  return 0;
}