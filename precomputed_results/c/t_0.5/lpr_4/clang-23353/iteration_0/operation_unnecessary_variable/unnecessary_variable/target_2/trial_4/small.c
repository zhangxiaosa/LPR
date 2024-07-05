int i;
int j_h;

int main() {
  char p3 = 6;
  j_h = 0;
  j_h ^= fn1(p3, i) && 1L;
  j_h ^= fn1(p3 - 1, i) && 1L;
  j_h ^= fn1(p3 - 2, i) && 1L;
  j_h ^= fn1(p3 - 3, i) && 1L;
  j_h ^= fn1(p3 - 4, i) && 1L;
  j_h ^= fn1(p3 - 5, i) && 1L;
  j_h ^= fn1(p3 - 6, i) && 1L;
  j_h ^= fn1(p3 - 7, i) && 1L;
  j_h ^= fn1(p3 - 8, i) && 1L;
  j_h ^= fn1(p3 - 9, i) && 1L;
  j_h ^= fn1(p3 - 10, i) && 1L;
  j_h ^= fn1(p3 - 11, i) && 1L;
  j_h ^= fn1(p3 - 12, i) && 1L;
  j_h ^= fn1(p3 - 13, i) && 1L;
  j_h ^= fn1(p3 - 14, i) && 1L;
  return 0;
}