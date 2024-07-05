void fn1(p1) { printf("checksum = %X\n", p1); }

unsigned s;
void fn8(unsigned p1, char *p2, int p3) { s = s ^ p1; }

unsigned u;
int v;
static unsigned w = 254U;
signed ad[7][5][7] = {{8}, {8}, {{8}, 0x98}};
short ae;
int af;

signed fn9() {
  unsigned ah = 3U;
  int ai[2];
  int i;
  for (i = 0; i < 2; i++)
    ai[i] = 8;
  for (w = 1;;) {
    for (; i < 5; i++)
      ;
    for (af = 6; af >= 0; af -= 1) {
      v = ai[0] ^= ad[w + 1][w][af] = (1 % 4294967295U);
      w =  fn3(1, 255U);
      u--;
      w =  1;
      ah =  3U;
    }
    return ae;
  }
}
int main() {
  int i, j, k;
  int aj = 0;
  fn9();
  for (i = 0; i < 7; i++)
    for (j = 0; j < 5; j++)
      for (k = 0; k < 7; k++)
        fn8(ad[i][j][k], "g_643[i][j][k]", aj);
  fn1(s);
  return 0;
}
