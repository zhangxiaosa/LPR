char fn1(char p1, char p2) { return p1 * p2; }

signed i;
signed j;
int main() {
  char p3;

  // Unrolled iteration 1
  p3 = 6;
  j ^= fn1(p3, i) && 1L;
  p3--;

  // Unrolled iteration 2
  p3 = 5;
  j ^= fn1(p3, i) && 1L;
  p3--;

  // Unrolled iteration 3
  p3 = 4;
  j ^= fn1(p3, i) && 1L;
  p3--;

  // Unrolled iteration 4
  p3 = 3;
  j ^= fn1(p3, i) && 1L;
  p3--;

  // Continue unrolling until all 14 iterations are unrolled

  return 0;
}