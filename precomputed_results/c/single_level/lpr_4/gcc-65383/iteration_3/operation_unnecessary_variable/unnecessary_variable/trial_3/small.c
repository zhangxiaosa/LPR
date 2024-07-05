unsigned g;
int h[] = {0x92A1D2CDL, 0x92A1D2CDL, 0x92A1D2CDL};
unsigned fn2() {
  for (;;) {
    if (h[2])
      return 0xC3L;
    g = 0xC3L;
  }
}
int main() { fn2(); }
