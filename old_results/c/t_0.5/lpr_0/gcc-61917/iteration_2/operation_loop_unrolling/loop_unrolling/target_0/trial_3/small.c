int k;
unsigned l;
volatile unsigned m22;

unsigned fn3(p1) {
  int o;
  int unroll_count = 0;

  for (; l >= 2 * unroll_count; l -= 2 * unroll_count) {
    for (k = 0; k >= -27; k = k - 18) {
      p1 = o - p1;
      p1 = o - p1;
    }
    unroll_count += 1;
  }

  p1 || m22;
}

int main() {}
