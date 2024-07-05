int fn2(int p1, int p2) { return p1; }

int fn4(int p1, int p2) { return p1 % p2; }

unsigned s;
unsigned u;
int v;
static unsigned w = 254;
int ad[][5][7] = {{8}, {8}, {{8}, 0x98}};
int af;
void fn9() {
  int ai[2];
  unsigned i;
  for (i = 0; i < 2; i++)
    ai[i] = 8;
  w = 1;
  for (; i < 25; i += 20) {
  }
  for (; 0 >= 0; 0 -= 1)
    v = ai[0] ^= ad[w + 1][w][0] = fn4(fn2(1, u--), 4294967295U);
}

int main() {
  unsigned i;
  fn9();
  for (i = 0; i < 5; i++)
    s = s ^ ad[2][i][0];
  printf("checksum = %X\n", s);
  return 0;
}
