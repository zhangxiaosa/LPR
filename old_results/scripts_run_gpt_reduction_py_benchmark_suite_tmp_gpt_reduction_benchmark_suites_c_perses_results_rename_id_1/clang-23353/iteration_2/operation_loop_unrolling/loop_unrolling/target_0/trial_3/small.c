char fn1(char p1, char p2) {
  return p1 * p2;
}

int h;
int i;

int *fn2(unsigned p1, int *p2, unsigned p3) {
  // Unrolled loop iteration 1
  p3 = 6;
  h ^= fn1(p3, i) && 1L;
  p3--;
  h ^= fn1(p3, i) && 1L;
  
  // Unrolled loop iteration 2
  p3--;
  h ^= fn1(p3, i) && 1L;
  p3--;
  h ^= fn1(p3, i) && 1L;
  
  return p2;
}

int main() {
  return 0;
}