#include <stdio.h>

void fn1(unsigned p1) {
  printf("checksum = %X\n", p1);
}

signed fn2(signed p1, signed p2) {
  return p1;
}

short fn3(short p1, short p2) {
  return p1;
}

int fn4(int p1, int p2) {
  return p1 % p2;
}

unsigned fn5(unsigned p1, unsigned p2) {
  return p1;
}

void fn6(unsigned p1) {
  extern unsigned s;
  s = s ^ p1;
}

unsigned s;
void fn9() {
  extern unsigned u;
  extern int v;
  extern unsigned w;
  extern signed ad[7][5][7];
  extern short ae;
  extern int af;
  unsigned ah = 3U;
  int ai[2];
  int i;
  for (i = 0; i < 2; i++)
    ai[i] = 8;
  w = 1;
  while (1) {
    unsigned t1 = 255U;
    signed t2 = ah;
    t2 = fn2(t2, u--);
    t1 = fn5(t1, t2);
    t2 = 1;
    ai[0] ^= fn4(fn3(t2, t1), 4294967295U);
    ad[w + 1][w][6] = ai[0];
    v = ai[0];
    ad[w + 1][w][5] = v;
    v = ai[0];
    ad[w + 1][w][4] = v;
    v = ai[0];
    ad[w + 1][w][3] = v;
    v = ai[0];
    ad[w + 1][w][2] = v;
    v = ai[0];
    ad[w + 1][w][1] = v;
    v = ai[0];
    ad[w + 1][w][0] = v;
    af = 6;
    while (af >= 0) {
      v = ai[0];
      ad[w + 1][w][af] = v;
      af -= 1;
      v = ai[0];
      ai[0] ^= fn4(fn3(1, fn5(255U, fn2(ah, u--))), 4294967295U);
    }
    return ae;
  }
}

int main() {
  extern unsigned s;
  extern signed ad[7][5][7];
  s = 0U;
  fn9();
  for (int i = 0; i < 7; i++)
    for (int j = 0; j < 5; j++)
      for (int k = 0; k < 7; k++) {
        fn6(ad[i][j][k]);
      }
  fn1(s);
  return 0;
}