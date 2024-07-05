unsigned g;
int h2 = 0x92A1D2CDL;

signed fn1() {
  if (h2)
    return 0xC3L;

  g = 0x06D7L;

  for (;;) {}
}

signed main() {
  fn1();
}