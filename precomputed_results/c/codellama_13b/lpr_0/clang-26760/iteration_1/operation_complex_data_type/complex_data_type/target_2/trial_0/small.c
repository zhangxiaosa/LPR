
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
q:;
  k = k >> 1L;
  if (o) {
    k = k << m;
    goto q;
  }
}
int main() {
  // Decompose j_high into individual variables
  int j_high_1 = 0x24;
  int j_high_2 = 0xF9;
  int j_high_3 = 0x6B;
  int j_high_4 = 0x7B;

  // Use these variables in place of j_high in the rest of the program
  int g;
  int fn1() {
    unsigned k;
    for (g = 0; g;) {
      unsigned j_low;
      for (; j_low; --j_low)
        ;
      j_high_1 = j_low;
      j_high_2 = j_low;
      j_high_3 = j_low;
      j_high_4 = j_low;
    }
    unsigned m = j_high_1;
    unsigned o = g;
q:;
    k = k >> 1L;
    if (o) {
      k = k << m;
      goto q;
    }
  }
  int main() {}
}
