
struct s {
  long i;
  long j;
  long k;
};

struct s* fn1(struct s* p5) {
  p5->k;
w:;
  goto w;
}

long fn2() {
  struct s q;
  fn1(&q);
  for (;;) {
    struct s r;
    q = r;
  }
}

int main() {}
