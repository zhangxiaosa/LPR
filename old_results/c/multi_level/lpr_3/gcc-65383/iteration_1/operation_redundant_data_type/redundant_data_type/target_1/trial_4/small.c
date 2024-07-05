static unsigned g;
static unsigned h2 = 0x92A1D2CDL;
static unsigned i = 0x06D7L;

int fn2() {
  for (;;) {
    static unsigned r[5][9][5];
    if (h2 != 0)
      return 0xC3L;
    g = r[i][i][i] % UINT_MAX;
  }
}

int main() {
  fn2();
}
