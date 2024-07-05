
int fn1(int p2_low_low, int p2_low_high, int p2_high_low, int p2_high_high) {
  return (p2_low_low * p2_low_high) * (p2_high_low * p2_high_high);
}

int i;
int j;

int fn2(int p3, int p2_low_low, int p2_low_high, int p2_high_low, int p2_high_high) {
  for (p3 = 6; p3 != -7; p3--)
    j ^= fn1(p3, p2_low_low, p2_low_high, p2_high_low, p2_high_high) && 1L;
  return 0;
}

int main() { return 0; }
