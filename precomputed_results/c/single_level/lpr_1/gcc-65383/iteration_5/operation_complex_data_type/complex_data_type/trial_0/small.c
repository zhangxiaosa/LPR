unsigned g;
int h2 = 0x92A1D2CDL;
static unsigned i = 0x06D7L;

signed fn1() {
  for (;;) {
    int r1 = 5;
    int r2 = 9;
    int r3 = 5;
    int r[r1][r2][r3];
    if (h2)
      return 0xC3L;
    g = r[i][i][i];
  }
}

signed main() {
  fn1();
}