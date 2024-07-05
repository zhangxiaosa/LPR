
g: int
h0: int
r: int[5][9][5]
i: int
j: int
k: int

int g;
int h0 = 0x92A1D2CD;
int fn2() {
  for (;;) {
    int r[5][9][5];
    if (h0)
      return 0xC3;
    for (i = 0; i < 5; i++) {
      for (j = 0; j < 9; j++) {
        for (k = 0; k < 5; k++) {
          r[i][j][k] = (i * j * k) & 0xFF;
        }
      }
    }
    g = r[0x06D7][0x06D7][0x06D7];
  }
}
int main() { fn2(); }
