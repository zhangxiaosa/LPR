
struct s {
  int i;
  long j;
  unsigned k;
};

static struct s fn1(unsigned p1, unsigned p3, struct s p5) {
  return p5;
}

unsigned fn2(unsigned p1) {
  struct s p;
  unsigned q;
  fn1(0, p1, p);
  for (;;) {
    struct s r = p;
    p = r;
  }
}

int main() {}
