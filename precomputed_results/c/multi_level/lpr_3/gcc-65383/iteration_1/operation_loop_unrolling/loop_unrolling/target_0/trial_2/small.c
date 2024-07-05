unsigned g;
int h2 = 0x92A1D2CDL;
static unsigned i = 0x06D7L;
unsigned fn2() {
  int r[5][9][5];

  // Unrolled iteration 1
  if (h2)
    return 0xC3L;
  g = r[i][i][i];

  // Unrolled iteration 2
  if (h2)
    return 0xC3L;
  g = r[i][i][i];

  // Unrolled iteration 3
  if (h2)
    return 0xC3L;
  g = r[i][i][i];

  // Unrolled iteration 4
  if (h2)
    return 0xC3L;
  g = r[i][i][i];
}

int main() { fn2(); }
