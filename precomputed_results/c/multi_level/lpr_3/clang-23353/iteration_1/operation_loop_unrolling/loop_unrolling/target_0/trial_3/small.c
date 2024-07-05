int i;
char j_h;
char fn1(char p1, char p2) { return p1 * p2; }
int fn2(p3) {
  j_h ^= fn1(p3, i) && 1L;
  p3--;
  j_h ^= fn1(p3, i) && 1L;
  p3--;
  j_h ^= fn1(p3, i) && 1L;
  p3--;
  j_h ^= fn1(p3, i) && 1L;
  p3--;
  return 0;
}
int main() { return 0; }
