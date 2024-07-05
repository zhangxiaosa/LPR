c
int g;
int j_high_low_low = 0x24F96B7B;
int j_high_low_high = 0x00000000;
int k = 0;
int o = 0;
int m = 0;

for (g = 0; g;) {
  int j_low = j_high_low_low & 0x0000FFFF;
  j_high_low_low >>= 16;
  if (j_low > 0) {
    j_high_low_low = j_low;
    j_high_low_high = 0;
  }
  k = k << 1;
  o = o | (j_high_low_low >> 15);
  m = m | o;
}
