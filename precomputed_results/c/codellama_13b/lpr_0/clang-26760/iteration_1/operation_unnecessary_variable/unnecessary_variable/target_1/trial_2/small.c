
int fn1() {
  unsigned j_low;
  for (g = 0; g;) {
    j_low = 0xF9;
    for (; j_low; --j_low)
      ;
  }
  unsigned m = j_low;
  unsigned o = g;
q:;
  k = k >> 1L;
  if (o) {
    k = k << m;
    goto q;
  }
}
