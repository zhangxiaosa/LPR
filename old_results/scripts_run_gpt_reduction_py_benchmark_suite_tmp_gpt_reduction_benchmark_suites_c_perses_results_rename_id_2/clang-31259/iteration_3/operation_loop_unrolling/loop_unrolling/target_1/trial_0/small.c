int fn4(int p1, int p2) { return p1 % p2; }

unsigned s;
unsigned u;
int v;
static unsigned w = 254;
int ad[][5][7] = {{8}, {8}, {{8}, 0x98}};
int af;

int main() {
  int ai[2];
  unsigned j;
  for (j = 0; j < 2; j++)
    ai[j] = 8;
  w = 1;
  for (; j < 25; j += 20) {
  }

  v = ai[0] ^= ad[w + 1][w][6] = fn4(u--, 4294967295U);
  v = ai[0] ^= ad[w + 1][w][5] = fn4(u--, 4294967295U);
  v = ai[0] ^= ad[w + 1][w][4] = fn4(u--, 4294967295U);
  v = ai[0] ^= ad[w + 1][w][3] = fn4(u--, 4294967295U);
  v = ai[0] ^= ad[w + 1][w][2] = fn4(u--, 4294967295U);
  v = ai[0] ^= ad[w + 1][w][1] = fn4(u--, 4294967295U);
  v = ai[0] ^= ad[w + 1][w][0] = fn4(u--, 4294967295U);

  s = ad[2][1][0];
  printf("checksum = %X\n", s);
  return 0;
}