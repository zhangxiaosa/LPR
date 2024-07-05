unsigned g;

static unsigned i = 215;

unsigned fn2() {
  for (;;) {
    unsigned q = 195;
    int r0[5][9][5];
    if (0) // `h2` is optimized out
      return q;
    g = r0[i][i][i];
  }
}

int main() {
  fn2();
}
