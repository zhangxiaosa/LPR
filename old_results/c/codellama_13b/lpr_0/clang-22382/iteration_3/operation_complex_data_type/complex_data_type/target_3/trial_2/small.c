
struct s {
  long i;
  long j;
  long k;
};

static struct s** fn1(struct s** p5) {
  struct s *p6;
  p6 = p5;
  p6->k;
  goto w;
}

long fn2() {
  struct s *q;
  fn1(q);
  for (;;) {
    struct s *r = q;
    q = r;
  }
}

int main() {}
