char fn1(char p1, char p2) { return p1 * p2; }

signed h;
int i;
int main() {
  char p3;

  // Iteration 1
  p3 = 6;
  h ^= fn1(p3, i) && 1;

  // Iteration 2
  p3 = 5;
  h ^= fn1(p3, i) && 1;

  // Iteration 3
  p3 = 4;
  h ^= fn1(p3, i) && 1;

  // Iteration 4
  p3 = 3;
  h ^= fn1(p3, i) && 1;

  // Iteration 5
  p3 = 2;
  h ^= fn1(p3, i) && 1;

  // Iteration 6
  p3 = 1;
  h ^= fn1(p3, i) && 1;

  // Iteration 7
  p3 = 0;
  h ^= fn1(p3, i) && 1;

  // Iteration 8
  p3 = -1;
  h ^= fn1(p3, i) && 1;

  // Iteration 9
  p3 = -2;
  h ^= fn1(p3, i) && 1;

  // Iteration 10
  p3 = -3;
  h ^= fn1(p3, i) && 1;

  // Iteration 11
  p3 = -4;
  h ^= fn1(p3, i) && 1;

  // Iteration 12
  p3 = -5;
  h ^= fn1(p3, i) && 1;

  // Iteration 13
  p3 = -6;
  h ^= fn1(p3, i) && 1;

  // Iteration 14
  p3 = -7;
  h ^= fn1(p3, i) && 1;

  return 0;
}