int fn2(int p1, int p2) { return p1; }
int fn4(int p1, int p2) { return p1 % p2; }
int fn5(int p1, int p2) { return p1; }
int s;
int u;
int v;
static int w = 254U;
int ad_0_0_0 = 8;
int ad_1_0_0 = 8;
int ad_2_0_0 = 8;
int ad_2_0_1 = 0x98;
int af;
int main() {
  int ai[2];
  int aj;
  for (aj = 0; aj < 2; aj++)
    ai[aj] = 8;
  for (w = 1;;) {
    for (; aj < 5; aj++)
      ;
    for (af = 6; af >= 0; af -= 1)
      v = ai[0] ^= ad_2_0_1 = fn4(fn2(1, fn5(255, u--)), 4294967295);
    break;
  }
  int i, j, k;
  for (i = 0; i < 6; i += 2)
    for (j = 0; j < 5; j++)
      for (k = 0; k < 5; k += 2)
        s ^= ad_0_0_0;
  printf("checksum = %X\n", s);
  return 0;
}