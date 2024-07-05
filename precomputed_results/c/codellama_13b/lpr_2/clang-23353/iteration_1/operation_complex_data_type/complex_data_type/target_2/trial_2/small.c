
int fn1(char p1, char p2) {
  return p1 * p2;
}

int fn2(int p1) {
  int n = 6;
  int j = 0;
  while (n != -7) {
    j ^= fn1(n, p1) && 1L;
    n--;
  }
  return j;
}

int main() {
  return 0;
}
