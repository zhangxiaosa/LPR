
<SYS>

int g;
int h0 = 0x92A1D2CD;
int fn2() {
  for (;;) {
    int r[5][9][5];
    if (h0)
      return 0xC3;
    int i = 0x06D7;
    g = r[i][i][i];
  }
}
int main() { fn2(); }

// Decomposition of `r` into primary data types
int r1 = 5;
int r2 = 9;
int r3 = 5;

// Modified program with decomposition
int g;
int h0 = 0x92A1D2CD;
int fn2() {
  for (;;) {
    int i = 0x06D7;
    g = r1[i][i][i];
    if (h0)
      return 0xC3;
  }
}
int main() { fn2(); }

</SYS>
