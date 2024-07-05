
<SYS>

Given the following program and the specified data type, eliminate it, and substitute every instance of it with its associated original data type.. The program is char fn1(char p1, char p2) { return p1 * p2; }
int i;
int j;
int *fn2(int *p2, char p3) {
  for (p3 = 6; p3 != -7; p3--)
    j ^= fn1(p3, i) && 1L;
  return p2;
}
int main() { return 0; }

The target to be optimized is `int *` (pointer to `int`).

The optimized program is:

int fn1(int p1, int p2) { return p1 * p2; }
int i;
int j;
int *fn2(int *p2, int p3) {
  for (p3 = 6; p3 != -7; p3--)
    j ^= fn1(p3, i) && 1L;
  return p2;
}
int main() { return 0; }
