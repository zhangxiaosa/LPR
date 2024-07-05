char fn1(char p1, char p2) {
  return p1 * p2;
}

int i;
signed h;

int *fn2(unsigned p1, int *p2, signed p3) {
  p3 = 6;

  // Unrolled loop iteration 1
  h ^= fn1(p3, i) && 1L;
  p3--;

  // Unrolled loop iteration 2
  h ^= fn1(p3, i) && 1L;
  p3--;

  // Unrolled loop iteration 3
  h ^= fn1(p3, i) && 1L;
  p3--;

  // Unrolled loop iteration 4
  h ^= fn1(p3, i) && 1L;
  p3--;

  // Unrolled loop iteration 5
  h ^= fn1(p3, i) && 1L;
  p3--;

  // Unrolled loop iteration 6
  h ^= fn1(p3, i) && 1L;
  p3--;

  // Unrolled loop iteration 7
  h ^= fn1(p3, i) && 1L;
  p3--;

  return p2;
}

int main() {
  return 0;
}