
struct s {
  long i;
  long j;
  long k;
};

static struct s fn1(long p1, struct s p5) {
  p5_i = p5.i;
  p5_j = p5.j;
  p5_k = p5.k;
  goto w;
}

long fn2() {
  struct s q;
  fn1(0, q);
  for (;;) {
    struct s r = q;
    q = r;
  }
}

int main() {
  fn2();
}
