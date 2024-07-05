char fn1(char p1, char p2) { return p1 * p2; }

unsigned j_h;
int main() {
  char p3;
  unsigned temp;
  for (p3 = 6; p3 != -7; p3--) {
    temp = fn1(p3) && 1L;
    j_h ^= temp;
  }
  return 0;
}