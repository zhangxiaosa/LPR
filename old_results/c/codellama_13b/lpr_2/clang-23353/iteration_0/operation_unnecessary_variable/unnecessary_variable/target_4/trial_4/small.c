
int i;
int fn2(unsigned p1, char p3_high) {
  for (p3_high = 6; p3_high != -7; p3_high--)
    i ^= fn1(p3_high, i) && 1L;
  return i;
}
int main() { return 0; }
