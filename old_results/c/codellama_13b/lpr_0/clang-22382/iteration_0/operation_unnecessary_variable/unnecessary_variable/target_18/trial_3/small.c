
struct s {
  int i;
  long j;
  unsigned k;
};

static struct s fn1(unsigned p1, unsigned p3, struct s p5) {
  p5.k;
w:;
  goto w;
}

unsigned fn2(unsigned p1) {
  const struct s q = {0, 0, 0};
  fn1(0, p1, q);
  for (;;) {
    struct s r = q;
    q = r;
  }
}

int main() {}
