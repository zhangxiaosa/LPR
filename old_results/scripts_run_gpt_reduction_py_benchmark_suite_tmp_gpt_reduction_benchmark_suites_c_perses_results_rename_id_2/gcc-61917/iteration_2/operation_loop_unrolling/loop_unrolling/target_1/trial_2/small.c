int k;
unsigned l;
volatile unsigned m_flat[40];

unsigned fn3(signed o, unsigned p1) {
  for (;;) {
    for (; l; l++) {
      // Unrolled loop body
      k = 0;
      p1 = o - p1;
      k = -6;
      p1 = o - p1;
      k = -12;
      p1 = o - p1;
      k = -18;
      p1 = o - p1;
      k = -24;
      p1 = o - p1;
    }
    // Removed unnecessary statement p1 || m_flat[2];
  }
}