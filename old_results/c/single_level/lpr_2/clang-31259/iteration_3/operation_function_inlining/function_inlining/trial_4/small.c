typedef unsigned d;
typedef unsigned e;
typedef unsigned f;

signed fn2(signed p1, signed p2) { return p1; }

short fn3(short p1, short p2) { return p1; }

int fn4(int p1, int p2) { return p1 % p2; }

d fn5(d p1, d p2) { return p1; }

int main() {
  e ah = 3U;
  int ai[2];
  int i;
  d u;
  int v;
  static d w = 254U;
  signed ad[7][5][7] = {{8}, {8}, {{8}, 0x98}};
  f s;
  for (i = 0; i < 2; i++)
    ai[i] = 8;
  for (w = 1;;) {
    for (; i < 5; i++)
      ;
    for (int af = 6; af >= 0; af -= 1) {
      v = ai[0] ^= ad[w + 1][w][af] =
          fn4(fn3(1, fn5(255U, fn2(ah, --u))), 4294967295U);
    }
    printf("checksum = %X\n", ad[i][j][k]);
  }
  return 0;
}