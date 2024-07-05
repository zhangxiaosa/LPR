int g;
int h_2 = 0x92A1D2CDL;
int fn2() {
  for (;;) {
    if (h_2)
      return 0xC3L;
    g = 0;  // Optimized out 'r'
  }
}
int main() {
  fn2();
}