int i;
int j;
char fn1(char p1, char p2) { return p1 * p2; }
int fn2() {
  int n = 6;
  while (n != -7) {
    j ^= fn1(n, i) && 1L;
    n--;
  }
  return j;
}
int main() { return 0; }
