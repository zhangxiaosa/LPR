
char fn1(char p1, char p2) { return p1 * p2; }
int fn2(void) {
  for (int i = 6; i != -7; i--)
    j ^= fn1(i, i) && 1L;
  return 0;
}
int main() { return 0; }
