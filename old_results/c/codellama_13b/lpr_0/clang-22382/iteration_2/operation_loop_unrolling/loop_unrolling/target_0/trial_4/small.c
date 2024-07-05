
static struct s fn1(unsigned p1, struct s p5) {
  p5.k;
w:;
  goto w;
}
unsigned fn2(p1) {
  struct s q;
  fn1(0, q);
  for (int i = 0; i < 2; i++) {
    struct s r = q;
    q = r;
  }
}
int main() {}
