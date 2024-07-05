
struct s {
  int i;
  long j;
  unsigned k;
};

static struct s fn1(unsigned p1, unsigned p3) {
  p3.k;
w:;
  goto w;
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
