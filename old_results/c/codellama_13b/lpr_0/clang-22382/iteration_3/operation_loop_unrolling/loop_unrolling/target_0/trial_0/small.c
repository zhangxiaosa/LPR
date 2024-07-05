
static struct s fn1(struct s p5) {
  p5.k;
w:;
  goto w;
}
long fn2() {
  struct s q;
  fn1(q);
  q = q;
}
int main() {}
