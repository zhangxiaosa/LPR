int k;
volatile unsigned m_2_5;

int fn3(p1) {
  int o;
  for (;;) {
    int unroll_count = 4;
    for (; unroll_count; unroll_count--) {
      // First iteration
      for (k = 0; k >= -27; k = k - 6)
        p1 = o - p1;

      // Second iteration
      for (k = 0; k >= -27; k = k - 6)
        p1 = o - p1;

      // Third iteration
      for (k = 0; k >= -27; k = k - 6)
        p1 = o - p1;

      // Fourth iteration
      for (k = 0; k >= -27; k = k - 6)
        p1 = o - p1;
    }
    p1 || m_2_5;
  }
}

int main() {}
