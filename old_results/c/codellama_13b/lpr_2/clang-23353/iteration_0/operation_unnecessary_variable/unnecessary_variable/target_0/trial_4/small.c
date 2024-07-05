
char fn1(char p1, char p2) { return p1 * p2; }
int i;
int j;
int fn2(unsigned p1, char p3_high) {
  for (p3_high = 6; p3_high != -7; p3_high--)
    j ^= fn1(p3_high, i) && 1L;
  return j;
}
int main() { return 0; }
