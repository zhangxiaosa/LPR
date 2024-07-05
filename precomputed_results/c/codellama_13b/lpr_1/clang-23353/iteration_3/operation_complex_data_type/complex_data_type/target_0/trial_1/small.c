
int i;
char j;
char fn1(char p1, char p2) {
  char result;
  result = p1 * p2;
  return result;
}
char fn2(p3) {
  char p1, p2;
  for (p3 = 6; p3 != -7; p3--) {
    p1 = p3;
    p2 = i;
    j ^= fn1(p1, p2) && 1L;
  }
  return 0;
}
int main() {
  return 0;
}
