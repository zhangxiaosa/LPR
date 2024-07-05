
struct s {
  long i;
  long j;
  long k;
};

static struct s fn1(long p1, struct s p5) {
  long i = p5.i;
  long j = p5.j;
  long k = p5.k;

  w:;
  goto w;
}

long fn2() {
  struct s q;
  fn1(0, q);

  for (;;) {
    long i = q.i;
    long j = q.j;
    long k = q.k;

    q = (struct s) {i, j, k};
  }
}

int main() {}
