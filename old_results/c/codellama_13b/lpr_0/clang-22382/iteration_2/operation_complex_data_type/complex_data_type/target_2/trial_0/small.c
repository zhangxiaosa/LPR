
// Decomposed version of the program with primary data types
long i;
long j;
long k;

struct s {
  long i;
  long j;
  long k;
};

static struct s fn1(long p1, struct s p5) {
  p5.k;
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

int main() {}
