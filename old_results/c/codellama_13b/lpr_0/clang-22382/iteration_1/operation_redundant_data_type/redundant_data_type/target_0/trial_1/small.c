
int fn1(unsigned p1, unsigned p3, int p5) {
  p5;
w:;
  goto w;
}
int fn2(unsigned p1) {
  int q;
  fn1(0, p1, q);
  for (;;) {
    int r = q;
    q = r;
  }
}
int main() {}
