
int g;
int fn1() {
  unsigned j_high_low_low = 0x24F96B7B;
  unsigned j_high_low_high = 0x00000000;
  unsigned k;
  unsigned *j_low = &j_high_low_low;
  unsigned *j_high = &j_high_low_high;
  unsigned *m = &j_high_low_low;
  unsigned *o = &j_high_low_high;
  unsigned *k = &j_high_low_high;

  for (g = 0; g;) {
    for (; *j_low > 0; --*j_low)
      ;
    *j_high = 0;
  }

  *m = *j_low;
  *o = g;

q:;
  *k = *k >> 1L;
  if (*o) {
    *k = *k << *m;
    goto q;
  }
}
int main() {}
