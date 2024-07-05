unsigned g;
static unsigned i = 0x06D7L;
int main() {
  for (;;) {
    int r[5][9][5];
    if (0) // Optimized out: h2
      break;
    g = r[i][i][i];
  }
}