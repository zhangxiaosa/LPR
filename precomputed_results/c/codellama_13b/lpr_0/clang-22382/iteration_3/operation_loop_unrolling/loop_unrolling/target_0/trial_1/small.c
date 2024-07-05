
struct s {
  long i;
  long j;
  long k;
};

static struct s fn1(struct s p5) {
  p5.k;

  // Optimized loop unrolling
  for (int i = 0; i < 1000; i++) {
    p5.k = i;
    q = r;
  }

  goto w;
}

long fn2() {
  struct s q;
  fn1(q);

  // Optimized loop unrolling
  for (int i = 0; i < 1000; i++) {
    struct s r = q;
    q = r;
  }
}

int main() {
  return 0;
}
