
int fn1(int p1, int p2) {
  return p1 * p2;
}
int i;
int j;
int fn2(int p1) {
  int n = 6;
  while (n != -7) {
    j ^= fn1(n, i) && 1L;
    n--;
  }
  return j;
}
int main() {
  return 0;
}
