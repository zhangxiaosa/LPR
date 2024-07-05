int fn2(int p1, int p2) { return p1; }
short fn3(short p1, short p2) { return p1; }
int fn4(int p1, int p2) { return p1 % p2; }
int s;
int u;
int v;
static int w = 254;
signed ad[7][5][7] = {{8}, {8}, {{8}, 0x98}};
short ae;
int af;
int main() {
  int i, j, k;
  int ai_0 = 8;
  int ai_1 = 8;
  fn9();
  int ai[2] = {ai_0, ai_1};
  for (i = 0; i < 6; i += 2) {
    for (j = 0; j < 5; j++)
      for (k = 0; k < 7; k++)
        s = s ^ ad[i][j][k];
    printf("s_unrolled_iter_1 = %X\n", s);
  }
  return 0;
}