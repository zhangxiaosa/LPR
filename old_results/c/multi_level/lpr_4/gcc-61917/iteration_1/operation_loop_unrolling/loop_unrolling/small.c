int k;
unsigned l;
volatile unsigned m[5][8];

int fn3(p1) {
  int o;
  for (;;) {
    int unroll_count = 4;
    for (; unroll_count > 0; unroll_count--) {
      for (k = 0; k >= -27; k = k - 6) {
        p1 = o - p1;
      }
    }
    p1 || m[2][5];
  }
}

int main() {}
