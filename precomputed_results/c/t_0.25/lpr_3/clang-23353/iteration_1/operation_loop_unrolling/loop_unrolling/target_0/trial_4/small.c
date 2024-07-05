char fn1(char p1, char p2) { return p1 * p2; }

signed h;
int i;

int main() {
  char p3;
  char bitwiseResult;

  p3 = 6;

  // Unrolled loop
  bitwiseResult = fn1(p3, i) && 1L;
  h ^= bitwiseResult;

  p3 = 2;

  bitwiseResult = fn1(p3, i) && 1L;
  h ^= bitwiseResult;

  p3 = -2;

  bitwiseResult = fn1(p3, i) && 1L;
  h ^= bitwiseResult;

  p3 = -6;

  bitwiseResult = fn1(p3, i) && 1L;
  h ^= bitwiseResult;

  char b = bitwiseResult;

  return 0;
}