int k;
int l;
volatile int m_2_5;
int fn3(p1) {
  int o;
  for (;;) {
    for (; l >= 4; l -= 4) {
      // Unrolled iteration 1
      p1 = o - p1;
      p1 = o - p1;
      p1 = o - p1;
      p1 = o - p1;

      // Unrolled iteration 2
      p1 = o - p1;
      p1 = o - p1;
      p1 = o - p1;
      p1 = o - p1;

      // Unrolled iteration 3
      p1 = o - p1;
      p1 = o - p1;
      p1 = o - p1;
      p1 = o - p1;

      // Unrolled iteration 4
      p1 = o - p1;
      p1 = o - p1;
      p1 = o - p1;
      p1 = o - p1;
    }
  }
}

int main() {}
