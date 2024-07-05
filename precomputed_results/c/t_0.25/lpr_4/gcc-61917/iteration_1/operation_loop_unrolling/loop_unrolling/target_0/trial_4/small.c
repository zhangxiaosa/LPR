int k;
unsigned l;
volatile unsigned m_2_5;
unsigned fn3(p1) {
  signed o;
  for (; l >= 4; l -= 4) {
    // Unrolled loop body
    for (k = 0; k >= -27; k = k - 6)
      p1 = o - p1;

    for (k = 0; k >= -27; k = k - 6)
      p1 = o - p1;

    for (k = 0; k >= -27; k = k - 6)
      p1 = o - p1;

    for (k = 0; k >= -27; k = k - 6)
      p1 = o - p1;

    p1 || m_2_5;
  }
}

int main() {}
