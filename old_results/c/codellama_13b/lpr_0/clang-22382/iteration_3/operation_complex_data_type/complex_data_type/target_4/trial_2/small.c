
struct s {
  long i;
  long j;
  long k;
};

static struct s fn1(struct s p5) {
  p5.k;
w:;
  goto w;
}

long fn2() {
  long i, j, k;
  struct s q;
  fn1(q);
  for (;;) {
    i = q.i;
    j = q.j;
    k = q.k;
    q = {i, j, k};
  }
}

int main() {}
