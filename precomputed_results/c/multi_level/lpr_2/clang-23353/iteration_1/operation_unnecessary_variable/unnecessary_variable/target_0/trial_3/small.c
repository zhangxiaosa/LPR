char fn1(char p1, char p2) { return p1 * p2; }
int i;
int *fn2(int *p2, char p3) {
  for (p3 = 6; p3 >= -9; p3 -= 4)
    fn1(p3, i);
  return p2;
}
int main() { return 0; }