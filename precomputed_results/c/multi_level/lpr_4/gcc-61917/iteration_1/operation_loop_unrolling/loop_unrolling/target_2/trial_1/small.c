int k;
unsigned l;
volatile unsigned m[5][8];

int fn3(p1) {
  int o;
  for (;;) {
    int unroll_count = 4;
    for (; unroll_count > 0; unroll_count--) {
      // First unrolled iteration
      k = 0;
      p1 = o - p1;

      // Second unrolled iteration
      k = k - 6;
      p1 = o - p1;

      // Third unrolled iteration
      k = k - 6;
      p1 = o - p1;

      // Fourth unrolled iteration
      k = k - 6;
      p1 = o - p1;
    }
    p1 || m[2][5];
  }
}

int main() {}