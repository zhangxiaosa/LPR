
int i, j;

int *fn1(int p1, int p2) {
  return (char *)(p1 * p2);
}

int *fn2(int *p2, char p3) {
  for (p3 = 6; p3 != -7; p3--) {
    j ^= fn1(p3, i) && 1L;
  }
  return p2;
}

int main() {
  i = 5;
  j = 10;
  int *p = fn2(&i, 'a');
  return 0;
}
