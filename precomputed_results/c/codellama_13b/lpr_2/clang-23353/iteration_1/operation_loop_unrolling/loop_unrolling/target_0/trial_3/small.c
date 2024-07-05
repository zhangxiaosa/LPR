
char fn1(char p1, char p2) {
  return p1 * p2;
}

int i;
int j;

int fn2(int p1) {
  int p1_copy = p1;
  for (p1 = 6; p1 != -7; p1--) {
    j ^= fn1(p1_copy, i) && 1L;
  }
  return j;
}

int main() {
  return 0;
}
