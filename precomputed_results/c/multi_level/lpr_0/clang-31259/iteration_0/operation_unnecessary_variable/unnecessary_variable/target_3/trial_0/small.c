int fn2(int p1, int p2) { return p1; }
int fn4(int p1, int p2) { return p1 % p2; }
int fn5(int p1, int p2) { return p1; }
int s;
int u;
int v;
static unsigned w = 254U;
int ad[7][5][7] = {{8}, {8}, {{8}, 0x98}};
int af;

int main() {
  int ai[2];
  int j, k;
  for (int i = 0; i < 2; i++)
    ai[i] = 8;

  // Unrolled loop with constant propagation
  // First iteration
  s ^= ad[0][j][0] ^ ad[0][j][2] ^ ad[0][j][4];
  s ^= ad[0][j][0] ^ ad[0][j][2] ^ ad[0][j][4 + 2];
  // Second iteration
  s ^= ad[2][j][0] ^ ad[2][j][2] ^ ad[2][j][4];
  s ^= ad[2][j][0] ^ ad[2][j][2] ^ ad[2][j][4 + 2];

  printf("checksum = %X\n", s);
  return 0;
}