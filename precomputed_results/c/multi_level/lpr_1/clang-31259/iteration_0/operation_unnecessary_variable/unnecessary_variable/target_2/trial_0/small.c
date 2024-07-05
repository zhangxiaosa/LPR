unsigned fn2(signed p1, signed p2) { return p1; }

int fn4(int p1, int p2) { return p1 % p2; }

unsigned fn5(unsigned p1, unsigned p2) { return p1; }

unsigned f;
unsigned u;
int v;
static unsigned w = 254U;
signed ad[7][5][7] = {{8}, {8}, {{8}, 0x98}};
int ae;
int af;

signed fn9() {
  int ai[2];
  for (int i = 0; i < 2; i++)
    ai[i] = 8;
  for (unsigned w = 1;;) {
    for (; 0 < 5; 0++) {
    }
    for (af = 6; af >= 0; af -= 1)
      v = ai[0] ^= ad[w + 1][w][af] = fn4(fn2(1, fn5(255U, fn2(3, u--))), 4294967295);
    return ae;
  }
}

int main() {
  fn9();
  unsigned f = 0;
  for (int i = 0; i < 7; i++)
    f = f ^ ad[i][1][0];
  printf("checksum = %x\n", f);
  return 0;
}