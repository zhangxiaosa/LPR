
int g;
int fn1() {
  unsigned int j_high_low_low = 0x24F96B7B;
  unsigned int j_high_low_high = 0x00000000;
  unsigned int k;
  for (g = 0; g;) {
    unsigned int j_low;
    for (; j_low; --j_low)
      ;
    j_high_low_low = j_low;
    j_high_low_high = 0;
  }
  unsigned int m = j_high_low_low;
  unsigned int o = g;
q:;
  k = k >> 1L;
  if (o) {
    k = k << m;
    goto q;
  }
}
int main() {}
