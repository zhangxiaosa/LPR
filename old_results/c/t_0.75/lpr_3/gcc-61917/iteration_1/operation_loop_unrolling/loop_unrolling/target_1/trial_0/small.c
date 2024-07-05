int k;
unsigned l;
volatile unsigned m22;

unsigned fn3(p1) {
  while (1) {
    while (l) {
      // Unrolled loop body (iteration 1)
      p1 = o - p1;
      p1 = o - p1;
      p1 = o - p1;
      p1 = o - p1;
      p1 = o - p1;
      p1 = o - p1;
      l--;

      // Unrolled loop body (iteration 2)
      p1 = o - p1;
      p1 = o - p1;
      p1 = o - p1;
      p1 = o - p1;
      p1 = o - p1;
      p1 = o - p1;
      l--;
    }
    p1 || m22;
  }
}

int main() {}
