int k;
unsigned l;
volatile unsigned m22;
unsigned fn3(p1) {
  int o;
  // Unrolled loop 1
  while (l) {
    for (k = 0; k >= -27; k = k - 6)
      p1 = o - p1;
    l--;
  }

  // Unrolled loop 2
  while (l) {
    for (k = 0; k >= -27; k = k - 6)
      p1 = o - p1;
    l--;
  }

  // Unrolled loop 3
  while (l) {
    for (k = 0; k >= -27; k = k - 6)
      p1 = o - p1;
    l--;
  }

  p1 || m22;
}

int main() {}
