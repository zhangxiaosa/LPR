
int fn1(int p1, int p2) { return p1 * p2; }
int i;
int j;
int fn2(int p3) {
  for (p3 = 6; p3 != -7; p3--)
    j ^= fn1(p3, i);
  return 0;
}
int main() { return 0; }
