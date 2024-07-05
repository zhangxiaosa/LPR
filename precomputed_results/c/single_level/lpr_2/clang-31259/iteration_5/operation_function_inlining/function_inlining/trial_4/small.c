signed fn2(signed p1, signed p2) { return p1; }
short fn3(short p1, short p2) { return p1; }
int fn4(int p1, int p2) { return p1 % p2; }
unsigned fn5(unsigned p1, unsigned p2) { return p1; }
int af;
unsigned u;
int v;
static unsigned w = 254U;
signed ad[7][5][7] = {{8}, {8}, {{8}, 0x98}};

int main() {
  int i, j, k;

  unsigned ah = 3U;
  int ai[2];
  int fn9_i;

  for (fn9_i = 0; fn9_i < 2; fn9_i++)
    ai[fn9_i] = 8;

  for (w = 1;;) {
    for (fn9_i = 0; fn9_i < 5; fn9_i++)
      ;

    for (af = 6; af >= 0; af -= 1) {
      u--;
      v = ai[0] ^= ad[w + 1][w][af] = fn4(fn3(1, fn5(255U, ah)), 4294967295U);
    }

    return v;
  }

  for (i = 0; i < 7; i++)
    for (j = 0; j < 5; j++)
      for (k = 0; k < 6; k += 2)
        printf("checksum = %X\n", ad[i][j][k]);

  return 0;
}