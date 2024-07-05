int k;
unsigned l;
volatile unsigned m_flat[40];

unsigned fn3(signed o, unsigned p1) {
  for (;;) {
    for (; l; l++)
      for (k = 0; k >= -27; k = k - 6) {
        // Unrolled loop body (iteration 1)
        p1 = o - p1;

        // Unrolled loop body (iteration 2)
        k = k - 6;
        p1 = o - p1;

        // Unrolled loop body (iteration 3)
        k = k - 6;
        p1 = o - p1;

        // Unrolled loop body (iteration 4)
        k = k - 6;
        p1 = o - p1;
      }
    p1 || m_flat[2];
  }
}

int main() {
}