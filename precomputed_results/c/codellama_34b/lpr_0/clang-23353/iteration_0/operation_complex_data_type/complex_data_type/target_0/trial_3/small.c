
int fn1(int p1, int p2) {
  return p1 * p2;
}

int main() {
  int i = 0;
  int j = 0;
  for (int p3 = 6; p3 != -7; p3--) {
    j ^= fn1(p3, i) && 1L;
  }
  return 0;
}
