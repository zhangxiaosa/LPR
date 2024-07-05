int k;
unsigned l;
volatile unsigned m_2_5;

unsigned fn3(unsigned p1) {
  for (;;) {
    for (; l >= 4; l -= 4) {
      // Unrolled iteration 1
      p1 = 0x4FL - p1;
      p1 = 0x4FL - p1;
      p1 = 0x4FL - p1;
      p1 = 0x4FL - p1;

      // Unrolled iteration 2
      p1 = 0x4FL - p1;
      p1 = 0x4FL - p1;
      p1 = 0x4FL - p1;
      p1 = 0x4FL - p1;

      // Unrolled iteration 3
      p1 = 0x4FL - p1;
      p1 = 0x4FL - p1;
      p1 = 0x4FL - p1;
      p1 = 0x4FL - p1;

      // Unrolled iteration 4
      p1 = 0x4FL - p1;
      p1 = 0x4FL - p1;
      p1 = 0x4FL - p1;
      p1 = 0x4FL - p1;
    }

    // Handle remaining iterations
    while (l) {
      p1 = 0x4FL - p1;
      l--;
    }

    if (p1)
      m_2_5;
  }
}

int main() {}
