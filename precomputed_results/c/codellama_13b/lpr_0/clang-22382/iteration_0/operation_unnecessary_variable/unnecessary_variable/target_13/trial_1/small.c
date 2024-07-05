
struct s {
  int i;
  long j;
  unsigned k;
};

static struct s fn1(unsigned p1, unsigned p3, unsigned p5) {
  p5.k;
w:;
  goto w;
}

unsigned fn2(unsigned p1) {
  struct s p;
  unsigned q;
  fn1(0, p1, 3, p);
  for (;;) {
    struct s r = p;
    p = r;
  }
}

int main() {}
