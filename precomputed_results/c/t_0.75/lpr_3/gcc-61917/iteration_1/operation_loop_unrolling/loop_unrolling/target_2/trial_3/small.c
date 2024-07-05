int k;
unsigned l;
volatile unsigned m22;

unsigned fn3(p1) {
  int o;
  while (1) {
    while (l) {
      // Unrolled loop body (iteration 1)
      for (k = 0; k >= -27; k = k - 6)
        p1 = o - p1;
      l--;

      // Unrolled loop body (iteration 2)
      for (k = 0; k >= -27; k = k - 6)
        p1 = o - p1;
      l--;

      // Unrolled loop body (iteration 3)
      for (k = 0; k >= -27; k = k - 6)
        p1 = o - p1;
      l--;

      // Unrolled loop body (iteration 4)
      for (k = 0; k >= -27; k = k - 6)
        p1 = o - p1;
      l--;
    }
    p1 || m22;

    // Unrolled loop body
    while (l) {
      for (k = 0; k >= -27; k = k - 6)
        p1 = o - p1;
      l--;
    }
    p1 || m22;
  }
}

int main() {}