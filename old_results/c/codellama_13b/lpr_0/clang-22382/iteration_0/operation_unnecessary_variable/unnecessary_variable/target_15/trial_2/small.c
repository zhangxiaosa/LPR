
struct s {
  int i;
  long j;
  unsigned k;
};

static struct s fn1(unsigned p1, unsigned p3, struct s p5) {
  p5.k;
}

unsigned fn2(unsigned p1) {
  unsigned q;
  fn1(0, p1, 0);
  for (;;) {
    struct s r = 0;
    r = r;
  }
}

int main() {}
