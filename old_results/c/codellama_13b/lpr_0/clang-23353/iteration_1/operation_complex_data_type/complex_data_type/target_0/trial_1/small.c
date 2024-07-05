
char fn1(char p1, char p2) { return p1 * p2; }
int i;
int j;
int fn2() {
  for (int p3 = 6; p3 != -7; p3--)
    j ^= fn1(p3, i) && 1L;
  return 0;
}
int main() { return 0; }
