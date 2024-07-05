
<SYS>

Given the following program and the specified function, optimize it out via function inlining.. The program is char fn1(char p1, char p2) { return p1 * p2; }
int i;
int j;
int *fn2(int *p2, char p3) {
  for (p3 = 6; p3 != -7; p3--)
    j ^= fn1(p3, i) && 1L;
  return p2;
}
int main() { return 0; }

The target to be optimized is fn2.

The optimized program is:

int i;
int j;
int *fn2(int *p2, char p3) {
  for (p3 = 6; p3 != -7; p3--)
    j ^= (p3 * i) && 1L;
  return p2;
}
int main() { return 0; }

The optimization is done by inlining the function fn1, which is called only once in the program. The function fn1 is inlined by replacing its call with its body, which is the expression (p1 * p2).

The optimized program is functionally equivalent to the original program, but it is more efficient because it avoids the overhead of calling a function.
