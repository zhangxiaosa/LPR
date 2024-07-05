
int fn1() {
  unsigned j_high_low_low_low = 0xF9;
  unsigned k;
  for (g = 0; g;) {
    unsigned m = j_low;
    for (; m; --m)
      ;
    j_high_low_low_low = m;
  }
  unsigned o = g;
q:;
  k = k >> 1L;
  if (o) {
    k = k << j_high_low_low_low;
    goto q;
  }
}
int main() {}
