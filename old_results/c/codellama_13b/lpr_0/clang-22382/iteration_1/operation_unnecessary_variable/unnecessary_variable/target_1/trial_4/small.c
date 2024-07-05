
static struct s fn1(unsigned p1, unsigned p3, struct s p5) {
  p5.k;
  goto w;
}
unsigned fn2(p1) {
  struct s q;
  fn1(0, 0, q);
  for (;;) {
    struct s r = q;
    q = r;
  }
}
int main() {}
