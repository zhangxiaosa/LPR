c
int fn2(unsigned p1, int *p2, char p3) {
  int i;
  int j;
  int result;
  for (i = 0; i < 7; i++) {
    j ^= fn1(p3, i) && 1L;
  }
  result = p2;
  return result;
}
