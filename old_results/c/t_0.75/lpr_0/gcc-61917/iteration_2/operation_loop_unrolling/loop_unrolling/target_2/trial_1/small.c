int k;
unsigned l;
volatile unsigned m25;
unsigned fn3(p1) {
  int o;
  for (;;) {
    // Unrolled iteration 1
    for (; l >= 3; l -= 3) {
      // Unrolled iteration 1
      p1 = o - p1;
      p1 = o - p1;
      p1 = o - p1;

      // Unrolled iteration 2
      p1 = o - p1;
      p1 = o - p1;
      p1 = o - p1;

      // Unrolled iteration 3
      p1 = o - p1;
      p1 = o - p1;
      p1 = o - p1;
    }

    // Handle remaining iterations that do not fit into unrolling
    for (; l; l++)
      p1 = o - p1;

    p1 || m25;
  }
}

int main() {}