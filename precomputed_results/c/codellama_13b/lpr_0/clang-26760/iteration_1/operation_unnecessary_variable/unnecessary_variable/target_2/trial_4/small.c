
int g;
int fn1() {
  unsigned j_high_low_low_low = 0xF9;
  unsigned k;
  for (g = 0; g;) {
    // j_low is unused, so we can optimize it out
    for (; ; --j_low)
      ;
    j_high_low_low_low = j_low;
  }
  unsigned m = j_high_low_low_low;
  unsigned o = g;
q:;
  k = k >> 1L;
  if (o) {
    k = k << m;
    goto q;
  }
}
int main() {}
