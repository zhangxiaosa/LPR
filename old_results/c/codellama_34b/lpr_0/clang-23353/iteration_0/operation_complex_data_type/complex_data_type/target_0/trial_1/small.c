
int fn1(int p1, int p2) {
  return p1 * p2;
}

int main() {
  int i;
  int j;
  int *p2;

  for (i = 6; i != -7; i--)
    j ^= fn1(i, i) && 1L;

  return 0;
}
