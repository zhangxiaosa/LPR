unsigned g;
int h[] = {0x92A1D2CDL, 0x92A1D2CDL, 0x92A1D2CDL};
unsigned fn2() {
  int r[5][9][5];

  // First iteration
  if (h[2])
    return 0xC3L;
  g = r[0x06D7L][0x06D7L][0x06D7L];

  // Second iteration
  if (h[2])
    return 0xC3L;
  g = r[0x06D7L][0x06D7L][0x06D7L];

  // ...remaining code outside the loop
}

int main() { fn2(); }
