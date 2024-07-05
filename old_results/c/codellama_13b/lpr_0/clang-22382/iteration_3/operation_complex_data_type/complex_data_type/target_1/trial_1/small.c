c
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
  long q;
  fn1(q);
  for (;;) {
    long r = q;
    q = r;
  }
}

int main() {}
