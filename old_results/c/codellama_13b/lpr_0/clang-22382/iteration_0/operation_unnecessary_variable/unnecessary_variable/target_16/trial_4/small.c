
struct s {
  int i;
  long j;
  unsigned k;
};

static struct s fn1(unsigned p1, unsigned p3, struct s p5) {
  p5.k;
  goto w;
}

unsigned fn2(unsigned p1) {
  unsigned q;
  fn1(0, p1, (struct s){0});
  for (;;) {
    struct s r = (struct s){0};
    (struct s){0} = r;
  }
}

int main() {}
