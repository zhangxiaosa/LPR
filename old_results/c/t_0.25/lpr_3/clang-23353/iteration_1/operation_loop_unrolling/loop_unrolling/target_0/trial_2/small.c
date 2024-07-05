char fn1(char p1, char p2) {
  return p1 * p2;
}

signed h;
int i;

int main() {
  char p3;
  char bitwiseResult;
  
  p3 = 6;
  
  // Unrolled loop iteration 1
  bitwiseResult = fn1(p3, i) && 1L;
  h ^= bitwiseResult;
  
  // Unrolled loop iteration 2
  p3--;
  bitwiseResult = fn1(p3, i) && 1L;
  h ^= bitwiseResult;
  
  // Unrolled loop iteration 3
  p3--;
  bitwiseResult = fn1(p3, i) && 1L;
  h ^= bitwiseResult;
  
  // Unrolled loop iteration 4
  p3--;
  bitwiseResult = fn1(p3, i) && 1L;
  h ^= bitwiseResult;
  
  char b = bitwiseResult;
}