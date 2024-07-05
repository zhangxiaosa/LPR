int fn2(int p1, int p2) { return p1; }

int fn4(int p1, int p2) { return p1 % p2; }

int fn5(int p1, int p2) { return p1; }

int s;
int u;
int v;
static unsigned w = 254U;
int ad[7][5][7] = {{8}, {8}, {{8}, 0x98}};
int af;

int main() {
  int ai[2];
  int i, j;
  int k = 0;

  for (i = 0; i < 2; i++)
    ai[i] = 8;

  for (w = 1;;) {
    for (; af < 5; af++)
      ;
    for (af = 6; af >= 0; af -= 1)
      v = ai[0] ^= ad[w + 1][w][af] = fn4(fn2(1, fn5(255, u--)), 4294967295);
    break;
  }

  for (i = 0; i < 6; i += 2)
    for (j = 0; j < 5; j++)
      s ^= ad[i][j][0];

  printf("checksum = %X\n", s);
  return 0;
}