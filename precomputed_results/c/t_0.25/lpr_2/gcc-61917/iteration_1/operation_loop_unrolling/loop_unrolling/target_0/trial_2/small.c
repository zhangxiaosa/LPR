int k;
unsigned l;
volatile unsigned m[5][8];

unsigned fn3(p1) {
  signed o;
  for (;;) {
    for (; l >= 4; l -= 4) {
      // Unrolled iteration 1
      for (k = 0; k >= -27; k = k - 6)
        p1 = o - p1;
      p1 || m[2][5];

      // Unrolled iteration 2
      for (k = 0; k >= -27; k = k - 6)
        p1 = o - p1;
      p1 || m[2][5];

      // Unrolled iteration 3
      for (k = 0; k >= -27; k = k - 6)
        p1 = o - p1;
      p1 || m[2][5];

      // Unrolled iteration 4
      for (k = 0; k >= -27; k = k - 6)
        p1 = o - p1;
      p1 || m[2][5];
    }

    // Handle remaining iterations (less than 4)
    for (; l; l++)
      for (k = 0; k >= -27; k = k - 6)
        p1 = o - p1;
    p1 || m[2][5];
  }
}

int main() {}