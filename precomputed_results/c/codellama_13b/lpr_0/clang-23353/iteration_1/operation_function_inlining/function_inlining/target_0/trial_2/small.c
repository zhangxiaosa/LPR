
int i;
int j;
int fn1(p3, p4) {
  return p3 * p4;
}
int fn2(p3) {
  for (p3 = 6; p3 != -7; p3--)
    j ^= fn1(p3, i) && 1L;
  return 0;
}
int main() { return 0; }
