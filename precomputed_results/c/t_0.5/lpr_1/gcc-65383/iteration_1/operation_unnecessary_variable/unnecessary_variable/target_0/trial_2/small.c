int h2 = 0x92A1D2CDL;
unsigned fn2() {
  for (;;) {
    int r[225];
    if (h2)
      return 0xC3L;
    r[0x06D7L] = r[0x06D7L]; // Optimized out the assignment to g
  }
}
int main() { fn2(); }
