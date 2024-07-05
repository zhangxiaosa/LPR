
int fn1(char p1, char p2) { return p1 * p2; }

int *fn2(unsigned int p1, int *p2, char p3_1, char p3_2) {
  for (p3_1 = 6; p3_1 != -7; p3_1--) {
    j ^= fn1(p3_1, p3_2) && 1L;
  }
  return p2;
}

int main() { return 0; }
