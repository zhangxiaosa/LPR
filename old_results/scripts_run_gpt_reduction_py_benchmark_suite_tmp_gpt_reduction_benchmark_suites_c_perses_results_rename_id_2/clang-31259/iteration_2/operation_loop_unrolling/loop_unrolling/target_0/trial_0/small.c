int fn2(int p1, int p2) { return p1; }
int fn4(int p1, int p2) { return p1 % p2; }
unsigned s;
unsigned u;
int v;
static unsigned w = 254;
int ad[][5][7] = {{8}, {8}, {{8}, 0x98}};
int af;
int main() {
  unsigned i;
  int ai[2];
  unsigned j;
  ai[0] = 8;
  ai[1] = 8;
  w = 1;
  j = 1;

  v = ai[0] ^= ad[w + 1][w][6] = fn4(fn2(1, u--), 4294967295U);
  s = s ^ ad[2][0][0];
  s = s ^ ad[2][1][0];
  s = s ^ ad[2][2][0];
  s = s ^ ad[2][3][0];
  s = s ^ ad[2][4][0];
  printf("checksum = %X\n", s);
  return 0;
}