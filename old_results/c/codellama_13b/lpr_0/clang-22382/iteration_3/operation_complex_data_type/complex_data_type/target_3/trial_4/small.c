
struct s {
  long i;
  long j;
  long k;
};

void fn1(struct s* p5) {
  p5->k;
}

void fn2() {
  struct s q;
  fn1(&q);
  for (;;) {
    struct s r = q;
    q = r;
  }
}

int main() {
  return 0;
}
