
struct s {
  long i;
  long j;
  unsigned k;
};

static struct s fn1(unsigned p1, struct s p5) {
  p5.k;
  goto w;
}

int fn2(unsigned p1) {
  struct s q;
  fn1(0, q);
  for (;;) {
    struct s r = q;
    q = r;
  }
}

int main() {}
