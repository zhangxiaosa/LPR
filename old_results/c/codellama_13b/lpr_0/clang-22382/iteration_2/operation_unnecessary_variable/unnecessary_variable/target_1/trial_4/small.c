
struct s {
  long i;
  long j;
  long k;
};

static struct s fn1(struct s q) {
  q.k;
w:;
  goto w;
}

long fn2() {
  struct s r;
  fn1(r);
  for (;;) {
    struct s t = r;
    r = t;
  }
}

int main() {}
