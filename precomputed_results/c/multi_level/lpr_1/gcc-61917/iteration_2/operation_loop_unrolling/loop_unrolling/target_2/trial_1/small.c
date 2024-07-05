int k;
int l;
volatile int m_flat[40];

int fn3(p1) {
  for (;;) {
    for (; l; l++)
    {
      // Optimized loop unrolling
      for (; k >= -27; k -= 24) {
        p1 = 24 - p1;
        p1 = 24 - p1;
        p1 = 24 - p1;
        p1 = 24 - p1;
      }
    }
    if (p1) {
      m_flat[2];
    }
  }
}

int main() {}
