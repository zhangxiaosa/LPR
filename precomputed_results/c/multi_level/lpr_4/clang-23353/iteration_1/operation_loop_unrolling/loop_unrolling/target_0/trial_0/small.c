char fn1(char p1, char p2) { return p1 * p2; }

int i;
signed j_h;
int main() {
  int p3;

  // Unrolled loop iterations
  p3 = 6;
  j_h ^= fn1(p3, i) && 1L;
  p3--;
  j_h ^= fn1(p3, i) && 1L;
  p3--;
  j_h ^= fn1(p3, i) && 1L;
  p3--;
  j_h ^= fn1(p3, i) && 1L;
  p3--;
  j_h ^= fn1(p3, i) && 1L;
  p3--;
  j_h ^= fn1(p3, i) && 1L;
  p3--;
  j_h ^= fn1(p3, i) && 1L;
  p3--;
  j_h ^= fn1(p3, i) && 1L;
  p3--;
  j_h ^= fn1(p3, i) && 1L;
  p3--;
  j_h ^= fn1(p3, i) && 1L;
  p3--;
  j_h ^= fn1(p3, i) && 1L;
  p3--;
  j_h ^= fn1(p3, i) && 1L;
  p3 = -7;
  j_h ^= fn1(p3, i) && 1L;

  return 0;
}