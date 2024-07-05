char fn1(char p1, char p2) { 
  return p1 * p2; 
}

int i;
unsigned j_h;

int main() {
  char p3;

  p3 = 6;
  j_h ^= fn1(p3, i) && 1L;  // Iteration 1
  p3 = 5;
  j_h ^= fn1(p3, i) && 1L;  // Iteration 2
  p3 = 4;
  j_h ^= fn1(p3, i) && 1L;  // Iteration 3
  p3 = 3;
  j_h ^= fn1(p3, i) && 1L;  // Iteration 4
  p3 = 2;
  j_h ^= fn1(p3, i) && 1L;  // Iteration 5
  p3 = 1;
  j_h ^= fn1(p3, i) && 1L;  // Iteration 6
  p3 = 0;
  j_h ^= fn1(p3, i) && 1L;  // Iteration 7
  p3 = -1;
  j_h ^= fn1(p3, i) && 1L;  // Iteration 8
  p3 = -2;
  j_h ^= fn1(p3, i) && 1L;  // Iteration 9
  p3 = -3;
  j_h ^= fn1(p3, i) && 1L;  // Iteration 10
  p3 = -4;
  j_h ^= fn1(p3, i) && 1L;  // Iteration 11
  p3 = -5;
  j_h ^= fn1(p3, i) && 1L;  // Iteration 12
  p3 = -6;
  j_h ^= fn1(p3, i) && 1L;  // Iteration 13
  p3 = -7;
  j_h ^= fn1(p3, i) && 1L;  // Iteration 14

  return 0;
}