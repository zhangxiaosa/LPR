int g;
int h2 = 0x92A1D2CDL;

unsigned fn2() {
  if (h2)
    return 0xC3L;
  else
    g = 0; // Assuming r[0x06D7L][0x06D7L][0x06D7L] is always 0

  for (;;) {
    // Empty loop
  }
}

int main() {
  fn2();
}