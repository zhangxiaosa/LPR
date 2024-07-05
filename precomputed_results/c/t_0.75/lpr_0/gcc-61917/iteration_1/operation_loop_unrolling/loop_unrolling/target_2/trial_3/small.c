int k;
unsigned l;
volatile unsigned m[5][8];

unsigned fn3(p1) {
  int o;
  for (;;) {
    for (; l; l++)
      p1 = o - p1;

    // Unrolled loop iterations
    p1 = o - p1; // Iteration 1
    p1 = o - p1; // Iteration 2
    p1 = o - p1; // Iteration 3
    p1 = o - p1; // Iteration 4
    p1 = o - p1; // Iteration 5

    p1 || m[2][5];
  }
}

int main() {}
