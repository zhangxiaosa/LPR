
int g;
int fn1() {
  uint32_t j_high = 0x24F96B7B;
  uint32_t k;
  for (g = 0; g;) {
    uint32_t j_low;
    for (; j_low; --j_low)
      ;
    j_high = j_low;
  }
  uint32_t m = j_high;
  uint32_t o = g;
q:;
  k = k >> 1;
  if (o) {
    k = k << m;
    goto q;
  }
}
int main() {}
