char fn1(char p1, char p2) {
  return p1 * p2;
}

signed h;
int i;

int main() {
  char p3;
  char bitwiseResult;

  bitwiseResult = fn1(6, i) && 1L;
  h ^= bitwiseResult;
  bitwiseResult = fn1(5, i) && 1L;
  h ^= bitwiseResult;
  bitwiseResult = fn1(4, i) && 1L;
  h ^= bitwiseResult;
  bitwiseResult = fn1(3, i) && 1L;
  h ^= bitwiseResult;

  char b = bitwiseResult;
}