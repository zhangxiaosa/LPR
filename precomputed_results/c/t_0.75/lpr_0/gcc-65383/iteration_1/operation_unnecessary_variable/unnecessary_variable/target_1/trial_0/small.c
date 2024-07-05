unsigned fn2() {
  for (;;) {
    // int r[5][9][5]; // Optimized out
    if (0x92A1D2CDL)
      return 0xC3L;
    // g = r[0x06D7L][0x06D7L][0x06D7L]; // Optimized out
  }
}

int main() { 
  fn2(); 
}