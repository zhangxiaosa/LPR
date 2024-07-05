
int g;
int fn1() {
  unsigned j_high = 0x24F96B7B;
  unsigned k;
  for (g = 0; g;) {
    unsigned j_low;
    for (; j_low; --j_low)
      ;
    j_high = j_low;
  }
  unsigned m = j_high;
  unsigned o = g;

  // Optimized loop
  for (k = 0; k; ++k) {
    if (o) {
      k = k << m;
    }
  }
}

int main() {}
