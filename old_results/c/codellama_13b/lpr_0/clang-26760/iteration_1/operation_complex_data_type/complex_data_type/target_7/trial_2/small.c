
int g;
int fn1() {
  unsigned j_high_low_low_high;
  unsigned j_high_low_low_low;
  unsigned j_high_low_high_high;
  unsigned j_high_low_high_low;
  unsigned k;
  unsigned j_low;
  unsigned m;
  unsigned o;

  j_high_low_low_high = 0x24;
  j_high_low_low_low = 0xF9;
  j_high_low_high_high = 0x00;
  j_high_low_high_low = 0x00;

  for (g = 0; g;) {
    j_low = 0;
    for (; j_low > 0; --j_low)
      ;
    j_high_low_low_low = j_low;
    j_high_low_high_low = 0;
  }

  m = j_high_low_low_low;
  o = g;

  k = k >> 1L;
  if (o) {
    k = k << m;
    goto q;
  }
}

int main() {}
