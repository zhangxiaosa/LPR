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
  int i, j;
  for (i = 0; i < 6; i += 2)
    for (j = 0; j < 5; j++)
      s ^= ad[i][j][0]; // Propagated "k" with constant value 0

  printf("checksum = %X\n", s);
  return 0;
}