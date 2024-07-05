char fn1(char p1, char p2) { return p1 * p2; }

int i;
int j_h;

int main() {
  for (int loopCounter = 0; loopCounter < 14; loopCounter++) {
    char p3 = 6 - loopCounter;
    j_h ^= fn1(p3, i) && 1L;
  }
  return 0;
}