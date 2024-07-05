int k;
unsigned l;
volatile unsigned m22;

unsigned fn3(p1) {
  int o;
  while (1) {
    while (l) {
      p1 = o - p1;  // Unrolled loop body
      p1 = o - p1;  // Unrolled loop body
      p1 = o - p1;  // Unrolled loop body
      p1 = o - p1;  // Unrolled loop body
      p1 = o - p1;  // Unrolled loop body
      l--;
    }
    p1 || m22;

    // Unrolled loop body
    while (l) {
      p1 = o - p1;  // Unrolled loop body
      p1 = o - p1;  // Unrolled loop body
      p1 = o - p1;  // Unrolled loop body
      p1 = o - p1;  // Unrolled loop body
      p1 = o - p1;  // Unrolled loop body
      l--;
    }
    p1 || m22;
  }
}

int main() {}
