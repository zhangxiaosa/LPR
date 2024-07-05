unsigned fn4(int p1, int p2) { return p1 % p2; }

unsigned s;
unsigned u;
unsigned v;
static int w = 254;
unsigned ad[][5][7] = {{8}, {8}, {{8}, 0x98}};
unsigned af;

int main() {
  unsigned ai[2];
  unsigned j;
  for (j = 0; j < 2; j++)
    ai[j] = 8;
  w = 1;
  for (; j < 25; j += 20) {
  }
  for (af = 6; af >= 0; af -= 1)
    v = ai[0] ^= ad[w + 1][w][af] = fn4(u--, 4294967295U);
  s = ad[2][1][0];
  printf("checksum = %X\n", (unsigned)s);
  return 0;
}