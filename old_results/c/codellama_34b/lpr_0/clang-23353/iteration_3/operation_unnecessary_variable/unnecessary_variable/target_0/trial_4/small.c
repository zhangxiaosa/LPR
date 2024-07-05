
int fn1(char p1, char p2) { return p1 * p2; }
int i;
int j;
int *fn2(int *p2, char p3) {
  for (i = 6; i != -7; i--)
    j ^= fn1(i, i) && 1L;
  return p2;
}
int main() { return 0; }
