unsigned g;
static unsigned i = 0x06D7L;
unsigned fn2() {
  for (;;) {
    int r[5][9][5];
    if (0) // constant propagation optimization
      return 0xC3L;
    g = r[i][i][i];
  }
}
int main() { fn2(); }
