char fn1(char p1, char p2) {
  return p1 * p2;
}

signed h;
int i;

int main() {
  char p3 = 6;

  h ^= fn1(p3, i) && 1L;
  p3--;

  h ^= fn1(p3, i) && 1L;
  p3--;

  h ^= fn1(p3, i) && 1L;
  p3--;

  h ^= fn1(p3, i) && 1L;
  p3--;

  h ^= fn1(p3, i) && 1L;
  p3--;

  h ^= fn1(p3, i) && 1L;
  p3--;

  h ^= fn1(p3, i) && 1L;
  p3--;

  h ^= fn1(p3, i) && 1L;
  p3--;

  h ^= fn1(p3, i) && 1L;
  p3--;

  h ^= fn1(p3, i) && 1L;
  p3--;

  h ^= fn1(p3, i) && 1L;
  p3--;

  h ^= fn1(p3, i) && 1L;
  p3--;

  char b = h;

  return 0;
}