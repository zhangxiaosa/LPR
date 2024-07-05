int k;
volatile unsigned m[5][8];
unsigned fn3(unsigned p1) {
  for (;;) {
    // Unrolled loop iteration 1
    if (l) {
      for (k = 0; k >= -27; k = k - 6)
        p1 = 0x4FL - p1;
      l--;
    }

    // Unrolled loop iteration 2
    if (l) {
      for (k = 0; k >= -27; k = k - 6)
        p1 = 0x4FL - p1;
      l--;
    }

    // Unrolled loop iteration 3
    if (l) {
      for (k = 0; k >= -27; k = k - 6)
        p1 = 0x4FL - p1;
      l--;
    }

    // Unrolled loop iteration 4
    if (l) {
      for (k = 0; k >= -27; k = k - 6)
        p1 = 0x4FL - p1;
      l--;
    }

    if (p1)
      m[2][5];
  }
}

int main() {}
