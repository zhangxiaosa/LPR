int k;
unsigned l;
volatile unsigned m_2_5;
unsigned fn3(p1) {
  signed o;
  for (;;) {
    for (; l; l++) {
      // Unrolled loop iteration 1
      k = 0;
      p1 = o - p1;
      // Unrolled loop iteration 2
      k = -6;
      p1 = o - p1;
      // Unrolled loop iteration 3
      k = -12;
      p1 = o - p1;
      // Unrolled loop iteration 4
      k = -18;
      p1 = o - p1;
      // Unrolled loop iteration 5
      k = -24;
      p1 = o - p1;
      // Unrolled loop iteration 6
      k = -30;
      p1 = o - p1;
    }
    p1 || m_2_5;
  }
}

int main() {}
