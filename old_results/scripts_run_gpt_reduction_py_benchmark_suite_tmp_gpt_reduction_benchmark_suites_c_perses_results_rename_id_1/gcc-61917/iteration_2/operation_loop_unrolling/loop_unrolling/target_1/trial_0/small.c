int k;
int l;
volatile int m_flat[40];
int fn3(p1) {
  // Unrolled Loop Iteration 1
  {
    for (; l; l++) {
      for (k = 0; k >= -27; k -= 6) {
        p1 = 24 - p1;
      }
    }
    if (p1)
      m_flat[2];
  }

  // Unrolled Loop Iteration 2
  {
    for (; l; l++) {
      for (k = 0; k >= -27; k -= 6) {
        p1 = 24 - p1;
      }
    }
    if (p1)
      m_flat[2];
  }

  // Unrolled Loop Iteration 3
  {
    for (; l; l++) {
      for (k = 0; k >= -27; k -= 6) {
        p1 = 24 - p1;
      }
    }
    if (p1)
      m_flat[2];
  }
}

int main() {}