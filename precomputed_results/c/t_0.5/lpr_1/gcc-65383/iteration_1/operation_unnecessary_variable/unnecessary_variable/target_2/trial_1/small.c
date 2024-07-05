unsigned g;
int h2 = 0x92A1D2CDL;

unsigned fn2() {
  for (;;) {
    if (h2)
      return 0xC3L;
    g = 0; // Removed the assignment of r[0x06D7L]
  }
}

int main() {
  fn2();
}