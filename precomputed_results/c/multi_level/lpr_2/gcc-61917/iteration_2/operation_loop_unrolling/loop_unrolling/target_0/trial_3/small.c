int k;
unsigned l;
volatile unsigned m_flat[40];

unsigned fn3(signed o, unsigned p1) {
  while (l) {
    // unrolled loop iteration 1
    for (k = 0; k >= -27; k = k - 6) {
      p1 = o - p1;
    }
    l++; // increment l by 1

    // unrolled loop iteration 2
    for (k = 0; k >= -27; k = k - 6) {
      p1 = o - p1;
    }
    l++; // increment l by 1

    // unrolled loop iteration 3
    for (k = 0; k >= -27; k = k - 6) {
      p1 = o - p1;
    }
    l++; // increment l by 1

    // ... continue unrolling the loop ...

  }
  p1 || m_flat[2]; // not modified
}

int main() {
  // empty body, not modified
}