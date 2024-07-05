char fn1(char p1, char p2) { return p1 * p2; }

signed h;
int i;

int main() {
  char p3 = 6;

  // Unrolled loop iteration 1
  h ^= fn1(p3, i) && 1L;
  p3--;

  // Unrolled loop iteration 2
  h ^= fn1(p3, i) && 1L;
  p3--;

  // Remaining loop iterations
  for (; p3 != -7; p3--)
    h ^= fn1(p3, i) && 1L;

  char b = h;
}