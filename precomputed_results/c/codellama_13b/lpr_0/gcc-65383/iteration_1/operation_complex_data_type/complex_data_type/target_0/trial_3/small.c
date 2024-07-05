
int fn1() {
  int r[5][9][5];
  int i, j, k;
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 9; j++) {
      for (k = 0; k < 5; k++) {
        r[i][j][k] = 0;
      }
    }
  }
  int g;
  int h2 = 0x92A1D2CDL;
  if (h2)
    return g;
  g = r[0x06D7L][0x06D7L][0x06D7L];
  return g;
}

int fn2() {
  int g;
  g = fn1();
  return g;
}

int main() {
  int g;
  g = fn2();
  return g;
}
