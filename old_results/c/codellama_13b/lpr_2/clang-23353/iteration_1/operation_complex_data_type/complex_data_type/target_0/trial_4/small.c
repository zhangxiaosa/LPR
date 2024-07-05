
char fn1(char p1, char p2) {
  return p1 << p2;
}

int fn2(int p1) {
  int n = 6;
  int j = 0;
  for (int i = 0; i < n; i++) {
    j ^= fn1(n, i) && 1L;
  }
  return j;
}

int main() {
  return 0;
}
