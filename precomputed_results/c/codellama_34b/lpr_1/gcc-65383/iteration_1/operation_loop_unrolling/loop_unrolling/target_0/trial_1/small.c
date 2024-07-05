
<SYS>

int g;
long h0 = 0x92A1D2CDL;
static long i = 0x06D7L;
int fn2() {
  for (;;) {
    int q = 0xC3L;
    int r[5][9][5];
    if (h0)
      return q;
    g = r[i][i][i];
  }
}
int main() { fn2(); }

// Optimization 1: Unroll the loop
int fn2_unrolled() {
  int q = 0xC3L;
  int r[5][9][5];
  if (h0)
    return q;
  g = r[i][i][i];
  for (int i = 0; i < 5; i++) {
    g = r[i][i][i];
  }
}
int main() { fn2_unrolled(); }

// Optimization 2: Remove the loop altogether
int fn2_optimized() {
  int q = 0xC3L;
  int r[5][9][5];
  if (h0)
    return q;
  g = r[i][i][i];
}
int main() { fn2_optimized(); }

</SYS>
