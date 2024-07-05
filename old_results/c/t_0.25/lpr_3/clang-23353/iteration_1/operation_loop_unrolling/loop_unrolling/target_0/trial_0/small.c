char fn1(char p1, char p2) { return p1 * p2; }

signed h;
int i;
int main() {
  char p3;
  char bitwiseResult;
  for (p3 = 6; p3 != -7; p3 -= 4) {
    bitwiseResult = fn1(p3, i) && 1L;
    h ^= bitwiseResult;

    bitwiseResult = fn1(p3 - 1, i) && 1L;
    h ^= bitwiseResult;

    bitwiseResult = fn1(p3 - 2, i) && 1L;
    h ^= bitwiseResult;

    bitwiseResult = fn1(p3 - 3, i) && 1L;
    h ^= bitwiseResult;
  }
  char b = bitwiseResult;
}