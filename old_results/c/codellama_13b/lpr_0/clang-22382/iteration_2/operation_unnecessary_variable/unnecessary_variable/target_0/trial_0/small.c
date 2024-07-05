
static struct s fn1(long p5) {
  p5.k;
w:;
  goto w;
}
long fn2() {
  struct s q;
  fn1(q);
  for (;;) {
    struct s r = q;
    q = r;
  }
}
int main() {}
