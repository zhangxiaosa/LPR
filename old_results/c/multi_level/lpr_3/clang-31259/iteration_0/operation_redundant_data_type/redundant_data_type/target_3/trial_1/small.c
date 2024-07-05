typedef unsigned e;
typedef unsigned f;

signed fn2(signed p1, signed p2) { return p1; }
short fn3(short p1, short p2) { return p1; }
int fn4(int p1, int p2) { return p1 % p2; }
unsigned fn5(unsigned p1, unsigned p2) { return p1; }

unsigned s;

unsigned v;
static unsigned w = 254U;
unsigned ad[7][5][7] = {{8}, {8}, {{8}, 0x98}};
unsigned ae;

unsigned fn9() {
  unsigned ah = 3U;
  unsigned ai[2];
  unsigned i;
  for (i = 0; i < 2; i++)
    ai[i] = 8U;
  for (w = 1;;) {
    for (; i < 5; i++) {
    }
    for (af = 6; af >= 0; af -= 1)
      v = ai[0] ^= ad[w + 1][w][af] = fn4(fn3(1, 255U), 4294967295U);
    return ae;
  }
}

int main() {
  unsigned i, j;
  fn9();
  for (i = 0; i < 7; i++)
    for (j = 0; j < 5; j++)
      s = s ^ ad[i][j][0];
  printf("checksum = %X\n", s);
  return 0;
}