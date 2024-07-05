
int fn2(unsigned p1, int *p2, char p3) {
  for (p3 = 6; p3 != -7; p3--) {
    j ^= fn1(p3, p2[p3]) && 1L;
  }
  return p2;
}
