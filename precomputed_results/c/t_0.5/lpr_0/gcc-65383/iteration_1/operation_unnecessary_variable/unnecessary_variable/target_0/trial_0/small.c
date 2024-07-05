unsigned g;

unsigned fn2() {
  for (;;) {
    int r2[5][9][5];
    if (0) // h2 is optimized out
      return 0xC3L;
    g = r2[0x06D7L][0x06D7L][0x06D7L];
  }
}

int main() {
  fn2();
}