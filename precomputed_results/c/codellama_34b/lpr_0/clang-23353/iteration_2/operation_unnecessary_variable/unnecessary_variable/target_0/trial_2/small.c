
int fn1(char p1, char p2) { return p1 * p2; }
int i;
int j;
int *fn2(int *p2, char p3) {
  for (p3 = 6; p3 != -7; p3--)
    j ^= fn1(p3, 0) && 1L;
  return p2;
}
int main() { return 0; }
