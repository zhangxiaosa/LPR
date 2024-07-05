
int g;
int h0 = 0x92A1D2CD;
static int i = 0x06D7;
int fn2() {
  int r[5][9][5];
  if (h0)
    return 0xC3;
  g = r[i][i][i];
  for (int j = 0; j < 5; j++) {
    for (int k = 0; k < 9; k++) {
      for (int l = 0; l < 5; l++) {
        g = r[i][j][k];
      }
    }
  }
}
int main() { fn2(); }
