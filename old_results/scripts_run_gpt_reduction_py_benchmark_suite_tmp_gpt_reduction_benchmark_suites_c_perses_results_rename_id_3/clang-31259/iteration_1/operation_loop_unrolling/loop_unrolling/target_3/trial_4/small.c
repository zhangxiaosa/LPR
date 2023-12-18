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
    for (; i < 5; i++) {
    }
    for (af = 6; af >= 0; af -= 1)
      v = ai[0] ^= ad[w + 1][w][af] =
          fn4(fn5(1, fn5(255U, fn2(3U, u--))), 4294967295U);
    return ae;
  }
}
int main() {
  int i, j;
  fn9();
  s = s ^ ad[0][0][0];
  s = s ^ ad[0][1][0];
  s = s ^ ad[0][2][0];
  s = s ^ ad[0][3][0];
  s = s ^ ad[0][4][0];
  s = s ^ ad[1][0][0];
  s = s ^ ad[1][1][0];
  s = s ^ ad[1][2][0];
  s = s ^ ad[1][3][0];
  s = s ^ ad[1][4][0];
  // Repeat for i = 2 to 6
  // ...
  printf("checksum = %X\n", s);
  return 0;
}