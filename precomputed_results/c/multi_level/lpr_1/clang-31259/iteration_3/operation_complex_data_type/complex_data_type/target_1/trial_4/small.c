int fn4(int p1, int p2) { return p2 % p1; }

unsigned u;
int v;
static unsigned w = 254U;
int ad_dim1[][5][7] = {{8}, {8}, {{8}, 0x98}};
int af;

int fn2(int p1, int p2) { return p1; }

int optimized_fn9() {
  int ai_0 = 8;
  int ai_1 = 8;
  int j;
  for (j = 0; j < 2; j++)
    ai_0 = 8;
    ai_1 = 8;
  for (w = 1;;) {
    for (; j < 4; j++) {
    }
    for (af = 6; af >= 0; af -= 1)
      v = ai_0 ^= ad_dim1[w + 1][w][af] = fn4(1, fn2(3, u--));
    return 0;
  }
}

int main() {
  optimized_fn9();
  printf("checksum = %x\n", ad_dim1[2][1][0]);
  return 0;
}