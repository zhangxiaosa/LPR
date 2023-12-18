unsigned f;
unsigned u;
int v;
static unsigned w = 254U;
signed ad[7][5][7] = {{8}, {8}, {{8}, 0x98}};
int af;

int fn4(int p1, int p2) { return p1 % p2; }

signed fn9() {
  int ai[2];
  for (int i = 0; i < 2; i++)
    ai[i] = 8;
  for (int af = 6; af >= 0; af -= 1)
    v = ai[0] ^= ad[2][1][af] = fn4(1, 4294967295);
  return 0;
}

int main() {
  int i;
  fn9();
  for (i = 0; i < 7; i++)
    f = f ^ ad[i][1][0];
  printf("checksum = %x\n", f);
  return 0;
}
