
int main() {
  int i;
  int j;
  int* p2;

  i = 0;
  j = 0;
  p2 = NULL;

  fn1(i, j);
  fn2(&p2, i);

  return 0;
}
