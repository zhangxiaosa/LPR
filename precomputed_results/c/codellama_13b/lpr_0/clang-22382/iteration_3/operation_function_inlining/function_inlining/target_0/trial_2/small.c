
struct s {
  long i;
  long j;
  long k;
};

static struct s fn1(struct s p5) {
  p5.k;
  goto w;
}

long fn2() {
  struct s q;
  struct s r = q;
  q = r;
  while (1) {
    r = fn1(q);
    q = r;
  }
}

int main() {}
