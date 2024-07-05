int k;
unsigned l;
volatile unsigned m22;

unsigned fn3(p1) {
  int o;
  while (1) {
    while (l) {
      // Unrolled loop body
      p1 = o - p1;
      p1 = o - p1;
      p1 = o - p1;
      p1 = o - p1;
      p1 = o - p1;

      p1 || m22;
      l--;
    }

    p1 || m22;

    while (l) {
      p1 || m22;
      p1 = o - p1;
      p1 || m22;
      p1 = o - p1;
      p1 || m22;
      p1 = o - p1;
      p1 || m22;
      p1 = o - p1;
      p1 || m22;
      p1 = o - p1;
      p1 || m22;
      l--;
    }
  }
}

int main() {}.