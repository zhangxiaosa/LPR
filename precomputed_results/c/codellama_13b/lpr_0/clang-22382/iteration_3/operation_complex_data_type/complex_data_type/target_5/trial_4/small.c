
int fn1(int p5) {
  p5.k;
w:;
  goto w;
}

int fn2() {
  int q;
  fn1(q);
  for (;;) {
    int r = q;
    q = r;
  }
}

int main() {
  int i, j, k;
  struct s s1 = {i, j, k};
  fn1(s1);
  fn2();
  return 0;
}
