int fn2(int p1, int p2) { return p1; }
int fn3(int p1, int p2) { return p1; }
int fn4(int p1, int p2) { return p1 % p2; }
unsigned fn5(unsigned p1, unsigned p2) { return p1; }

unsigned s;
unsigned u;
int v;
static unsigned w = 254U;
int ad[7][5][7] = {{8}, {8}, {{8}, 0x98}};
int af;

int fn9() {
  unsigned ah = 3U;
  int ai[2];
  int i;
  // Initialize array ai
  ai[0] = 8;
  ai[1] = 8;

  // Unrolled loop
  v = ai[0] ^= ad[w + 1][w][6] = fn4(fn3(1, fn5(255U, fn2(ah, u--))), 4294967295U);
  v = ai[0] ^= ad[w + 1][w][5] = fn4(fn3(1, fn5(255U, fn2(ah, u--))), 4294967295U);
  v = ai[0] ^= ad[w + 1][w][4] = fn4(fn3(1, fn5(255U, fn2(ah, u--))), 4294967295U);
  v = ai[0] ^= ad[w + 1][w][3] = fn4(fn3(1, fn5(255U, fn2(ah, u--))), 4294967295U);
  v = ai[0] ^= ad[w + 1][w][2] = fn4(fn3(1, fn5(255U, fn2(ah, u--))), 4294967295U);
  v = ai[0] ^= ad[w + 1][w][1] = fn4(fn3(1, fn5(255U, fn2(ah, u--))), 4294967295U);

  return 0;
}

int main() {
  int i, j, k;
  fn9();

  // Rest of the code remains unchanged
  for (i = 0; i < 7; i++)
    for (j = 0; j < 5; j++)
      for (k = 0; k < 7; k++)
        s = s ^ ad[i][j][k];

  printf("checksum = %X\n", s);
  return 0;
}
