int k;
int l;
volatile int m_flat[40];

int fn3(p1) {
  for (;;) {
    for (; l >= 1; l -= 1) {
      // Unrolled loop body
      p1 = 24 - p1;
      p1 = 24 - p1;
      p1 = 24 - p1;
      // Repeat unrolled code as needed
      // ...
    }
    if (p1)
      m_flat[2];
  }
}

int main() {}
