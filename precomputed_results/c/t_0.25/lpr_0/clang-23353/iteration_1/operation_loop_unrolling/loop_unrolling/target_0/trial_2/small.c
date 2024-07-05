char fn1(char p1, char p2) { return p1 * p2; }

int i;
signed h;

int *fn2(unsigned p1, int *p2, char p3) {
  h ^= fn1(p3, i) && 1L;
  h ^= fn1(p3 - 1, i) && 1L;
  h ^= fn1(p3 - 2, i) && 1L;
  h ^= fn1(p3 - 3, i) && 1L;
  h ^= fn1(p3 - 4, i) && 1L;
  h ^= fn1(p3 - 5, i) && 1L;
  h ^= fn1(p3 - 6, i) && 1L;
  h ^= fn1(p3 - 7, i) && 1L;
  h ^= fn1(p3 - 8, i) && 1L;
  h ^= fn1(p3 - 9, i) && 1L;
  h ^= fn1(p3 - 10, i) && 1L;
  h ^= fn1(p3 - 11, i) && 1L;
  h ^= fn1(p3 - 12, i) && 1L;
  return p2;
}

int main() { return 0; }
