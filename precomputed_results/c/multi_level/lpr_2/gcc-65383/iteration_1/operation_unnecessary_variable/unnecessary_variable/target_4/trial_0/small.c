unsigned f;
unsigned g;
int h2 = 0x92A1D2CDL;

int fn1() {
  for (;;) {
    if (h2)
      return 0xC3L;
    g = 0; // Replaced with constant value
  }
}

int main() {
  fn1();
}