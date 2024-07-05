
int fn1(char p1, char p2) {
  return p1 * p2;
}

int i;

int j;

int fn2(int p3) {
  for (int k = 0; k < 6; k++) {
    j ^= fn1(p3, i) && 1L;
  }
  return 0;
}

int main() {
  return 0;
}
