
int g;
int fn1() {
  unsigned j_high_low_low = 0x24F96B7B;
  unsigned j_high_low_high = 0x00000000;
  unsigned k;
  unsigned j_low = 0;
  while (j_low < 0x24F96B7B) {
    j_low++;
    j_high_low_low <<= 1;
  }
  j_high_low_low = 0;
  j_high_low_high = 0;
  while (j_low > 0) {
    j_low--;
    j_high_low_low >>= 1;
  }
  unsigned m = j_high_low_low;
  unsigned o = g;
  k = k >> 1L;
  while (o) {
    k = k << m;
    o--;
  }
  return k;
}
int main() {}
