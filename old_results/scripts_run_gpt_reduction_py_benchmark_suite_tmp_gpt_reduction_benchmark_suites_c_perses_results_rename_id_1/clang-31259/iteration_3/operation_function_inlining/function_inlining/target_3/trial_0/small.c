unsigned u;
int v;
static unsigned w = 254U;
signed ad_dim1[][5][7] = {{8}, {8}, {{8}, 0x98}};
int af;

int main() {
  int ai[2];
  int j;
  for (j = 0; j < 2; j++)
    ai[j] = 8;
  for (w = 1;;) {
    for (af = 6; af >= 0; af -= 1) {
      v = ai[0] ^= ad_dim1[w + 1][w][af] = 0;
    }
    return 0;
  }

  printf("checksum = %x\n", ad_dim1[2][1][0]);
  return 0;
}