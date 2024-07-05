char fn1(char p1, char p2) {
  return p1 * p2;
}

int i;
int j_h;
int *fn2(int *p2, char p3) {
  p3 = 2;

  j_h ^= fn1(p3, i) && 1;
  j_h ^= fn1(p3 - 4, i) && 1;

  return p2;
}

int main() {
  return 0;
}