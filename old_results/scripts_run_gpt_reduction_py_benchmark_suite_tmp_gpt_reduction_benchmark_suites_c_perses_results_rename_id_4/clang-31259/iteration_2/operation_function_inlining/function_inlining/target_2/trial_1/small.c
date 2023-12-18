int fn3(int p1, int p2) { return 1; }

int fn4(int p1, int p2) { return 1 % p2; }

int u;
int v;
static int w = 254;
signed ad1[][5][7] = {{8}, {8}, {{8}, 0x98}};
int af;

int main() {
  int ai[2];
  int i_main;
  int af_main;

  for (i_main = 0; i_main < 2; i_main++)
    ai[i_main] = 8;

  for (w = 1;;) {
    for (i_main = 0; i_main < 5; i_main += 2)
      ;

    for (af_main = 6; af_main >= 0; af_main -= 1) {
      v = ai[0] ^= ad1[w + 1][w][af_main] = 1 % 4294967295;
    }

    return 0;
  }

  int j_main;
  int s_main = 0;

  for (j_main = 0; j_main < 5; j_main++)
    s_main = s_main ^ ad1[2][j_main][0];

  printf("s_unrolled_iter_1 = %X\n", s_main);

  return 0;
}