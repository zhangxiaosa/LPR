signed fn2(signed p1, signed p2) { return p1; }
int fn4(int p1, int p2) { return p1 % p2; }
unsigned fn5(unsigned p1, unsigned p2) { return p1; }
unsigned s;
unsigned u;
int v;
static unsigned w = 254U;
signed ad[7][5][7] = {{8}, {8}, {{8}, 0x98}};
short ae;
int af;
signed fn9() {
  int ai[2];
  int i;
  for (i = 0; i < 2; i++)
    ai[i] = 8;
  for (w = 1;;) {
    // Unrolled loop iterations
    // Iteration 1
    i = 0;
    ai[0] = ai[0] ^= ad[w + 1][w][6] = fn4(fn5(1, fn5(255U, fn2(3U, u--))), 4294967295U);
    // Iteration 2
    i = 1;
    ai[0] = ai[0] ^= ad[w + 1][w][5] = fn4(fn5(1, fn5(255U, fn2(3U, u--))), 4294967295U);
    // Iteration 3
    i = 2;
    ai[0] = ai[0] ^= ad[w + 1][w][4] = fn4(fn5(1, fn5(255U, fn2(3U, u--))), 4294967295U);
    // Iteration 4
    i = 3;
    ai[0] = ai[0] ^= ad[w + 1][w][3] = fn4(fn5(1, fn5(255U, fn2(3U, u--))), 4294967295U);
    // Iteration 5
    i = 4;
    ai[0] = ai[0] ^= ad[w + 1][w][2] = fn4(fn5(1, fn5(255U, fn2(3U, u--))), 4294967295U);

    // Rest of the code
    return ae;
  }
}
int main() {
  int i, j;
  fn9();
  for (i = 0; i < 7; i++)
    for (j = 0; j < 5; j++)
      s = s ^ ad[i][j][0];
  printf("checksum = %X\n", s);
  return 0;
}