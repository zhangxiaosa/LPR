
int g;
int fn1() {
  unsigned long j_high = 0x24F96B7BL;
  unsigned long k;
  for (g = 0; g;) {
    unsigned long j_low;
    for (; j_low; --j_low)
      ;
    j_high = j_low;
  }
  unsigned long m = j_high;
  unsigned long o = g;
q:;
  k = k >> 1L;
  if (o) {
    k = k << m;
    goto q;
  }
}
int main() {}
