typedef int b;
char fn1(char p1, char p2) { return p1 * p2; }
signed j_h;
b i;

int main() {
  char p3;
  // Unrolled loop iteration 1
  p3 = 6;
  j_h ^= fn1(p3, i) && 1L;
  p3--;
  // Unrolled loop iteration 2
  p3 = 5;
  j_h ^= fn1(p3, i) && 1L;
  p3--;
  // Unrolled loop iteration 3
  p3 = 4;
  j_h ^= fn1(p3, i) && 1L;
  p3--;
  return 0;
}