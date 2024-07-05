
char fn1(char p1, char p2) { return p1 * p2; }
int i;
char j;
char *fn2(int p1, char *p2, char p3) {
  int k = p3 - 6;
  j ^= fn1(k + 6, i) && 1L;
  j ^= fn1(k + 5, i) && 1L;
  j ^= fn1(k + 4, i) && 1L;
  j ^= fn1(k + 3, i) && 1L;
  j ^= fn1(k + 2, i) && 1L;
  j ^= fn1(k + 1, i) && 1L;
  return p2;
}
int main() { return 0; }
