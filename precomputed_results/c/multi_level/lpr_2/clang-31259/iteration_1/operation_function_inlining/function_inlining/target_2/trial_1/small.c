int fn4(int p1, int p2) { return p1 % p2; }

unsigned s;
unsigned u;
int v;
static unsigned w = 254;
signed ad[][5][7] = {{8}, {8}, {{8}, 0x98}};
int af = 6;

void fn9() {
  int ai[2] = {8, 8};
  unsigned i;
  for (i = 0; i < 25; i++) {
  }
  while (af >= 0) {
    v = ai[0] ^= ad[w + 1][w][af] = fn4(1, 4294967295U);
    af -= 1;
  }
  break;
}

int main() {
  unsigned i;
  fn9();
  for (i = 0; i < 5; i++)
    s = s ^ ad[2][i][0];
  printf("checksum = %X\n", s);
  return 0;
}