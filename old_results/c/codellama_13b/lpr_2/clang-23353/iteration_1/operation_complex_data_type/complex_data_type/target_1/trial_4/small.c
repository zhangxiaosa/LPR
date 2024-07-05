
int i;
int j;
int fn2(p1) {
  int n = 6;
  while (n != -7) {
    j ^= fn1(n, i) && 1L;
    n--;
  }
  return j;
}
int main() {
  int i = 0;
  int j = 0;
  while (i < 1000) {
    j = fn2(i);
    i++;
  }
  return j;
}
