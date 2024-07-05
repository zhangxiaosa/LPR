
int i;
int j;
int fn1(char p1, char p2) {
  return p1 * p2;
}
int fn2(p1) {
  j = fn1(6, i);
  j ^= fn1(5, i);
  j ^= fn1(4, i);
  j ^= fn1(3, i);
  j ^= fn1(2, i);
  j ^= fn1(1, i);
  j ^= fn1(0, i);
  return j;
}
int main() {
  return 0;
}
