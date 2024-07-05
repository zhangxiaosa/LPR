char fn1(char p1, char p2) {
  return p1 * p2;
}

int i;
int j_h;

void fn2() {
  char p3 = 6;

  // Unrolled loop
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

  // Rest of the program
}

int main() {
  return 0;
}