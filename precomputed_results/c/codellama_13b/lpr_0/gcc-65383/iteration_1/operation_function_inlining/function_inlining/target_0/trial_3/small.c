c
unsigned g;
unsigned h2 = 0x92A1D2CDL;
int fn1() {
  for (;;) {
    int r[5][9][5];
    if (h2)
      return g;
    g = r[0x06D7L][0x06D7L][0x06D7L];
  }
}

void fn2() {
  unsigned g;
  unsigned h2 = 0x92A1D2CDL;
  int r[5][9][5] = {0};

  for (;;) {
    if (h2)
      return g;
    g = r[0x06D7L][0x06D7L][0x06D7L];
  }
}

int main() {
  fn2();
}
