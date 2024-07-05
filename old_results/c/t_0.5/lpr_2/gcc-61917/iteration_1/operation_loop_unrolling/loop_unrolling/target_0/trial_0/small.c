typedef unsigned e;
int k;
e l;
volatile unsigned m_20;

unsigned fn3(p1) {
  signed o;

  for (; l >= 4; l -= 4) {
    // Unrolled iterations...
    for (k = 0; k >= -27; k = k - 6)
      p1 = o - p1;

    for (k = 0; k >= -27; k = k - 6)
      p1 = o - p1;

    for (k = 0; k >= -27; k = k - 6)
      p1 = o - p1;

    for (k = 0; k >= -27; k = k - 6)
      p1 = o - p1;
  }

  // Handle remaining iterations (if any)
  for (; l; l++) {
    // Original loop body...
    for (k = 0; k >= -27; k = k - 6)
      p1 = o - p1;
  }

  p1 || m_20;
}