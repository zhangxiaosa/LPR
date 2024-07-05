char fn1(char p1, char p2) {
  return p1 * p2;
}

int i;
int j_h;

int main() {
  char p3;

  // Unrolled loop iteration 1
  p3 = 6;
  j_h ^= fn1(p3, i) && 1L;

  // Unrolled loop iteration 2
  p3 -= 1;
  j_h ^= fn1(p3, i) && 1L;

  // Unrolled loop iteration 3
  p3 -= 1;
  j_h ^= fn1(p3, i) && 1L;

  // Unrolled loop iteration 4
  p3 -= 1;
  j_h ^= fn1(p3, i) && 1L;

  // Repeat the unrolled loop until p3 becomes less than -7

  return 0;
}