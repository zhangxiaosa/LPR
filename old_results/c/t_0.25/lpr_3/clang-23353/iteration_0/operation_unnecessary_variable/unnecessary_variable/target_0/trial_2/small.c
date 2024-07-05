char fn1(char p1, char p2) {
  return p1 * p2;
}

signed h;
int i;

int main() {
  char p3;
  char bitwiseResult;
  for (p3 = 6; p3 != -7; p3--) {
    char fnResult = fn1(p3, i);
    bitwiseResult = fnResult && 1L;
    h ^= bitwiseResult;
    b = bitwiseResult;
  }
}