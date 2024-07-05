int k;
unsigned l;
volatile unsigned m[5][8];
unsigned fn3(p1) {
  signed o;
  for (; l >= 4; l -= 4) {
    // Original loop body executed 4 times
    for (k = 0; k >= -27; k = k - 6)
      p1 = o - p1;

    // Original loop body executed 4 times
    for (k = 0; k >= -27; k = k - 6)
      p1 = o - p1;

    // Original loop body executed 4 times
    for (k = 0; k >= -27; k = k - 6)
      p1 = o - p1;

    // Original loop body executed 4 times
    for (k = 0; k >= -27; k = k - 6)
      p1 = o - p1;
  }

  if (l == 3) {
    // Original loop body executed 3 times
    for (k = 0; k >= -27; k = k - 6)
      p1 = o - p1;
  } else if (l == 2) {
    // Original loop body executed 2 times
    for (k = 0; k >= -27; k = k - 6)
      p1 = o - p1;

    // Original loop body executed 2 times
    for (k = 0; k >= -27; k = k - 6)
      p1 = o - p1;
  } else if (l == 1) {
    // Original loop body executed 1 time
    for (k = 0; k >= -27; k = k - 6)
      p1 = o - p1;
  }

  p1 || m[2][5];
}

int main() {}