int u;
int w = 254;
int ad1[][5][7] = {{8}, {8}, {{8}, 0x98}};
int af;

int fn4(int p1, int p2) { return p1 % p2; }

int main() {
  int ai[2];
  int i;

  for (i = 0; i < 2; i++)
    ai[i] = 8;

  for (w = 1;;) {
    for (; i < 5; i += 2)
      ;

    for (af = 6; af >= 0; af -= 1)
      ai[0] ^= ad1[w + 1][w][af] = fn4(1, u--);

    return 0;
  }
}