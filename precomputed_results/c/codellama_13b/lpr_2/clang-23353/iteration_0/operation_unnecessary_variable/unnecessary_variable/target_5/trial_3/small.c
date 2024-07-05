
char fn1(char p1, char p2) { return p1 * p2; }
int i;
int j;
int fn2(unsigned p1) {
  for (int p3_high = 6; p3_high != -7; p3_high--)
    j ^= fn1(6, i) && 1L;
  return j;
}
int main() { return 0; }
