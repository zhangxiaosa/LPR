
int fn2(unsigned int p1, int *p2, char p3) {
  int result = 0;
  for (p3 = 6; p3 != -7; p3--) {
    result = fn1(p3, i);
    *p2 = result;
  }
  return p2;
}
