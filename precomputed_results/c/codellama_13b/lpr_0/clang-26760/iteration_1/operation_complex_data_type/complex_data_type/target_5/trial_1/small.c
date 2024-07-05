
int g;
int j_high_low_low;
int j_high_low_high;
int k;
int j_low;

int fn1() {
  j_high_low_low = 0x24F96B7B;
  j_high_low_high = 0x00000000;
  k = 0;
  for (g = 0; g;) {
    j_low = 0;
    for (; j_low > 0; --j_low)
      ;
    j_high_low_low = j_low;
    j_high_low_high = 0;
  }
  int m = j_high_low_low;
  int o = g;
q:
  k = k >> 1L;
  if (o) {
    k = k << m;
    goto q;
  }
}

int main() {}
