char j_h;

char fn1(char p2) {
  return 6 * p2;  // Replaced p1 with 6
}

int *fn2(unsigned p1, int *p2, char p3) {
  for (p3 = 6; p3 != -7; p3--)
    j_h ^= fn1(p3) && 1L;  // Removed i from fn1 call
  return p2;
}

int main() {
  return 0;
}