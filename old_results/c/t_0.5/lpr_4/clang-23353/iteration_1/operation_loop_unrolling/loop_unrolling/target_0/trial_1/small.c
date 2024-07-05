char fn1(char p1, char p2) { return p1 * p2; }

int i;
int j_h;

int main() {
  char p3;

  p3 = 6;
  j_h ^= fn1(p3, i) && 1L;
  p3 -= 1;

  j_h ^= fn1(p3, i) && 1L;
  p3 -= 1;

  j_h ^= fn1(p3, i) && 1L;
  p3 -= 1;

  j_h ^= fn1(p3, i) && 1L;
  p3 -= 1;

  return 0;
}