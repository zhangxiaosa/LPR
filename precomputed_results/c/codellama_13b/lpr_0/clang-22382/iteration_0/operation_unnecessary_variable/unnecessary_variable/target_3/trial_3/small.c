
static struct s fn1(unsigned p1, signed p2, unsigned p3, unsigned p4,
                    struct s p5) {
  p5.k;
w:;
  goto w;
}
unsigned fn2(p1) {
  struct s p;
  signed q;
  fn1(q, 0, p1, 3, p);
  for (;;) {
    struct s r = p;
    p = r;
  }
}
int main() {}
