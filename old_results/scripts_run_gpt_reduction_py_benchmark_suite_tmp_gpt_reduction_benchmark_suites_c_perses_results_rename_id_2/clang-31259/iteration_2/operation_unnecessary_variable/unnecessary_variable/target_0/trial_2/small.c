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
  for (af = 6; af >= 0; af -= 1)
    v = ai[0] ^= ad[w + 1][w][af] = fn4(fn2(1, u--), 4294967295U);
  s = ad[2][1][0];
  printf("checksum = %X\n", s);
  return 0;
}