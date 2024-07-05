
int g;
int h3 = 0x92A1D2CD;
int fn1() {
  for (;;) {
    // r3 is unused, so it can be optimized out
    if (h3)
      return 0xC3L;
    g = h3;
  }
}
int main() { fn1(); }
