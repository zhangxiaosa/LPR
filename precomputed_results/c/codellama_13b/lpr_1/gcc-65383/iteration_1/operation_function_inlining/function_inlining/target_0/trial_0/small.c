
unsigned g;
unsigned h[] = {0x92A1D2CDL, 0x92A1D2CDL, 0x92A1D2CDL};
int fn1() {
  for (;;) {
    if (h[2])
      return 0xC3L;
    g = 0x92A1D2CDL;
  }
}
int main() { fn1(); }
