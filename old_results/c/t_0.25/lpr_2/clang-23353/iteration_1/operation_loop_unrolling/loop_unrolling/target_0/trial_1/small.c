char fn1(char p1, char p2) { return p1 * p2; }

int i;
int j_h;

void fn2() {
  char p3 = 6;

  // Unrolled loop iteration 1
  j_h ^= fn1(p3, i) && 1L;
  p3--;

  // Unrolled loop iteration 2
  j_h ^= fn1(p3, i) && 1L;
  p3--;

  // Unrolled loop iteration 3
  j_h ^= fn1(p3, i) && 1L;
  p3--;

  // The loop condition is no longer necessary since we unrolled the loop.
}

int main() { return 0; }
