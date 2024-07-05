short fn3(short p1, short p2) { return 1; }
int fn4(int p1, int p2) { return 1 % p2; }
int s;
int u;
int v;
static int w = 254;
signed ad[7][5][7] = {{8}, {8}, {{8}, 0x98}};
short ae;
int af;
int fn9() {
  int ai[2];
  int i;
  for (i = 0; i < 2; i++)
    ai[i] = 8;
  for (w = 1;;) {
    for (; i < 5; i++)
      ;
    for (af = 6; af >= 0; af -= 1)
      v = ai[0] ^= ad[w + 1][w][af] = fn4(fn3(1, u--), 4294967295);
    return ae;
  }
}
int main() {
  int i, j, k;
  fn9();
  // Unrolled iterations of the loop
  s = s ^ ad[i][j][k]; i++;
  s = s ^ ad[i][j][k]; i++;
  s = s ^ ad[i][j][k]; i++;
  s = s ^ ad[i][j][k]; i++;
  s = s ^ ad[i][j][k]; i++;
  printf("s_unrolled_iter_1 = %X\n", s);
  return 0;
}