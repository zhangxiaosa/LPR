
struct s {
  long i;
  long j;
  long k;
};

static struct s fn1(struct s p5) {
  p5.k;
w:
  goto w;
}

long fn2() {
  struct s q;
  fn1(q);
  for (i = 0; i < 100; i++) {
    struct s r = q;
    q = r;
  }
}

int main() {}
