int fn3(int p1, int p2) {
  return p1;
}

int fn4(int p1, int p2) {
  return p1 % p2;
}

unsigned fn5(unsigned p1) {
  return p1;
}

static unsigned w = 254U;
signed ad[7][5][7] = {{8}, {8}, {{8}, 0x98}};

signed fn9() {
  int ai[2];
  ai[0] = 8;
  ai[1] = 8;

  for (;;) {
    for (int i = 0; i < 1; i++) {
      for (int af = 6; af >= 0; af -= 1) {
        ai[0] ^= ad[w + 1][w][af] = fn4(fn3(1, fn5(255U)), 4294967295U);
      }
    }
    return ai[0];
  }
}

int main() {
  int i, j, k;
  fn9();

  for (i = 0; i < 7; i++) {
    for (j = 0; j < 5; j++) {
      for (k = 0; k < 6; k += 2) {
        printf("checksum = %X\n", ad[i][j][k]);
      }
    }
  }

  return 0;
}