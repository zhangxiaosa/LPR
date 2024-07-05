
struct s {
  long i;
  long j;
  long k;
};

static struct s fn1(struct s p5) {
  p5.k;
  goto w;
  for (;;) {
    struct s r = p5;
    p5 = r;
  }
}

long fn2() {
  struct s q;
  fn1(q);
  for (;;) {
    struct s r = q;
    q = r;
  }
}

int main() {}
