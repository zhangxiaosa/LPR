typedef unsigned d;

d g;
int h[] = {0x92A1D2CDL, 0x92A1D2CDL, 0x92A1D2CDL};
static d i = 0x06D7L;

signed fn2() {
  for (;;) {
    if (h[2])
      return 0xC3L;
    g = g[i][i][i];
  }
}

int main() {
  fn2();
}