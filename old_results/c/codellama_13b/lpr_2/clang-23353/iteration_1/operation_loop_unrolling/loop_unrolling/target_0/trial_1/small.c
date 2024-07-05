
int fn2(int p1) {
  int i;
  int j;

  for (p1 = 6; p1 != -7; p1 -= 2) {
    j ^= fn1(p1 + 1, i) && 1L;
    j ^= fn1(p1, i) && 1L;
  }

  return j;
}
