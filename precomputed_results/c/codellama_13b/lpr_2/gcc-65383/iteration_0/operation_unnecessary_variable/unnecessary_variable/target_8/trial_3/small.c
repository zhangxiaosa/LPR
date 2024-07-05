
int g;
unsigned h2 = 0x92A1D2CDL;
int fn2() {
  for (;;) {
    if (h2)
      return g;
    g = g;
  }
}
int main() { fn2(); }
