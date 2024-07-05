int fn3(int p1, int p2) { return 1; }
int fn4(int p1, int p2) { return 1 % p2; }
int s;
int u;
int v;
static int w = 254;
signed ad1[][5][7] = {{8}, {8}, {{8}, 0x98}};
short ae;
int af;
int fn9() {
  int ai0;
  int ai1;
  int i;

  ai0 = 8;
  ai1 = 8;

  for (i = 0; i < 2; i++) {
    if (i == 0)
      ai0 = 8;
    else if (i == 1)
      ai1 = 8;
  }

  for (w = 1;;) {
    for (; i < 5; i += 2)
      ;
    for (af = 6; af >= 0; af -= 1)
      v = ai0 ^= ad1[w + 1][w][af] = fn4(fn3(1, u--), 4294967295);

      return ae;
    }
  }

int main() {
  int j;

  fn9();

  for (j = 0; j < 5; j++)
    s = s ^ ad1[2][j][0];

  printf("s_unrolled_iter_1 = %X\n", s);

  return 0;
}