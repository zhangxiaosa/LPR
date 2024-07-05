
char fn1(char p1, char p2) {
  return p1 * p2;
}

int fn2(int *p2, char p3) {
  int i = p2[0];
  int j = p2[1];
  for (int p3 = 6; p3 != -7; p3--) {
    j ^= fn1(p3, i) && 1L;
  }
  return p2;
}

int main() {
  int i = 0;
  int j = 0;
  int *p2 = malloc(2 * sizeof(int));
  p2[0] = i;
  p2[1] = j;
  fn2(p2, 'x');
  return 0;
}
