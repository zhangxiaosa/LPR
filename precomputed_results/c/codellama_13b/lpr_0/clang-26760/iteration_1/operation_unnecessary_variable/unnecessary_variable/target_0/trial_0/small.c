
int fn1() {
  unsigned j_high_low_low_low = 0xF9;
  unsigned k;
  for (; ;) {
    unsigned j_low;
    for (; j_low; --j_low)
      ;
    j_high_low_low_low = j_low;
  }
  unsigned m = j_high_low_low_low;
  unsigned o = 0;
q:;
  k = k >> 1L;
  if (o) {
    k = k << m;
    goto q;
  }
}
