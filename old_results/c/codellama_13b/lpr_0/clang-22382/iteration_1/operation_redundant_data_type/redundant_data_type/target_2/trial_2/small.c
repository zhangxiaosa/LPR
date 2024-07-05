
struct s {
  long i;
  long j;
  unsigned long k;
};

static struct s fn1(unsigned long p1, unsigned long p3, struct s p5) {
  p5.k;
w:;
  goto w;
}

unsigned long fn2(unsigned long p1) {
  struct s q;
  fn1(0, p1, q);
  for (;;) {
    struct s r = q;
    q = r;
  }
}

int main() {}
