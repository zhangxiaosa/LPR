int g;
int h[] = {0x92A1D2CDL, 0x92A1D2CDL, 0x92A1D2CDL};
static unsigned i = 0x06D7L;

unsigned fn2() {
  int r[5][9][5];
  
  if (h[2])
    return 0xC3L;
  
  g = r[i][i][i];

  if (h[2])
    return 0xC3L;
  
  g = r[i][i][i];

  if (h[2])
    return 0xC3L;
  
  g = r[i][i][i];

  // Unrolled iterations continue...

}

int main() { fn2(); }
