
int g;
int fn1() {
  unsigned j_high = 0x24F96B7BL;
  unsigned k;
  for (g = 0; g;)
    for (; j_high; --j_high)
      ;
  unsigned m = j_high;
  unsigned o = g;

  // Optimized loop unrolling
  for (int i = 0; i < j_high; ++i) {
    k = k >> 1L;
    if (o) {
      k = k << m;
      goto q;
    }
  }

  q:;
}
int main() {}
