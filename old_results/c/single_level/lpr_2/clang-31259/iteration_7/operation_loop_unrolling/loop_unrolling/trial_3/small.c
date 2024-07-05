short fn3(short p1, short p2) { return p1; }

int fn4(int p1, int p2) { return p1 % p2; }

unsigned fn5(unsigned p1, unsigned p2) { return p1; }

int af;
unsigned u;
int v;
static unsigned w = 254U;
signed ad[7][5][7] = {{8}, {8}, {{8}, 0x98}};

signed fn9() {
  int ai[2];
  int i;

  for (i = 0; i < 2; i++)
    ai[i] = 8;

  for (w = 1;;) {
    for (; i < 5; i++) {
      // Loop unrolling
      ;
      ;
      ;
      ;
      ;
    }

    // Loop unrolling
    v = ai[0] ^= ad[w + 1][w][6] = fn4(fn3(1, fn5(255U, --u)), 4294967295U);
    v = ai[0] ^= ad[w + 1][w][5] = fn4(fn3(1, fn5(255U, --u)), 4294967295U);
    v = ai[0] ^= ad[w + 1][w][4] = fn4(fn3(1, fn5(255U, --u)), 4294967295U);
    v = ai[0] ^= ad[w + 1][w][3] = fn4(fn3(1, fn5(255U, --u)), 4294967295U);
    v = ai[0] ^= ad[w + 1][w][2] = fn4(fn3(1, fn5(255U, --u)), 4294967295U);
    v = ai[0] ^= ad[w + 1][w][1] = fn4(fn3(1, fn5(255U, --u)), 4294967295U);
    v = ai[0] ^= ad[w + 1][w][0] = fn4(fn3(1, fn5(255U, --u)), 4294967295U);

    return v;
  }
}

int main() {
  int i, j, k;

  fn9();

  // Loop unrolling
  for (i = 0; i < 7; i++) {
    // Loop unrolling
    for (j = 0; j < 5; j++) {
      // Loop unrolling
      printf("checksum = %X\n", ad[i][j][0]);
      printf("checksum = %X\n", ad[i][j][2]);
      printf("checksum = %X\n", ad[i][j][4]);
    }
  }

  return 0;
}