char fn1(char p1, char p2) { return p1 * p2; }

signed h = 0;
int i;
int main() {
  char p3;
  char bitwiseResult;

  p3 = 6;
  bitwiseResult = fn1(p3, i) && 1L;
  h ^= bitwiseResult;

  p3 = 5;
  bitwiseResult = fn1(p3, i) && 1L;
  h ^= bitwiseResult;

  p3 = 4;
  bitwiseResult = fn1(p3, i) && 1L;
  h ^= bitwiseResult;

  p3 = 3;
  bitwiseResult = fn1(p3, i) && 1L;
  h ^= bitwiseResult;

  char b = bitwiseResult;
}