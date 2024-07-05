
struct s fn1(unsigned p1, struct s p5) {
  p5.k;
  goto w;
}

unsigned fn2(p1) {
  fn1(0, q);
  for (;;) {
    struct s r = q;
    q = r;
  }
}

int main() {}
