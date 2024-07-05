unsigned g;
int h2 = 2453134317;
static unsigned i = 175;
unsigned fn2() {
  for (;;) {
    // unsigned q = 195; (optimized out)
    int r[5][9][5];
    if (h2)
      return 195; // constant propagated
    g = r[i][i][i];
  }
}

int main() { fn2(); }