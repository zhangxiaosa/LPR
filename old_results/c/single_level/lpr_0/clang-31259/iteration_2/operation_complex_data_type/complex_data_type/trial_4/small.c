void fn1(unsigned p1, int p2) { printf("checksum = %X\n", p1); }

int fn2(int p1, int p2) { return p1; }

short fn3(short p1, short p2) { return p1; }

int fn4(int p1, int p2) { return p1 % p2; }

unsigned fn5(unsigned p1, unsigned p2) { return p1; }

unsigned s;

void fn6(p1) { s = s ^ p1; }

unsigned u;

int v;

static unsigned w = 254U;

signed ad_outer[7]; // Decomposed outermost dimension

signed ad_middle[5]; // Decomposed middle dimension

signed ad_inner[7]; // Decomposed innermost dimension

int af;

int fn9() {

  unsigned ah = 3U;
  int ai[2];
  int i;
  for (i = 0; i < 2; i++)
    ai[i] = 8;

  for (w = 1;;) {
    for (; i < 5; i++)
      ;
    for (af = 6; af >= 0; af -= 1)
      v = ai[0] ^= ad_outer[w + 1] * ad_middle[w] * ad_inner[af] = fn4(fn3(1, fn5(255U, fn2(ah, u--))), 4294967295U);

    return 0;
  }
}

int main() {
  int i, j, k;
  fn9();
  for (i = 0; i < 7; i++)
    for (j = 0; j < 5; j++)
      for (k = 0; k < 7; k++)
        fn6(ad_outer[i] * ad_middle[j] * ad_inner[k]);
  fn1(s, 0);

  return 0;
}