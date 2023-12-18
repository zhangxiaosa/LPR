int k;
unsigned l;
volatile unsigned m[5][8];

int fn3(p1) {
  int o;
  for (;;) {
    int unroll_count = 4;
    for (; unroll_count > 0; unroll_count--) {
      k = 0;
      p1 = o - p1;    // k = 0
      k = k - 6;
      p1 = o - p1;    // k = -6
      k = k - 6;
      p1 = o - p1;    // k = -12
      k = k - 6;
      p1 = o - p1;    // k = -18
      k = k - 6;
      p1 = o - p1;    // k = -24
    }
    p1 || m[2][5];
  }
}

int main() {}