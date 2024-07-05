c
struct s {
  long i;
  long j;
  long k;
};

long fn1(struct s p5) {
  long i = p5.i;
  long j = p5.j;
  long k = p5.k;
  k;
w:;
  goto w;
}

long fn2() {
  struct s q;
  fn1(q);
  for (;;) {
    struct s r = q;
    q = r;
  }
}

int main() {
  struct s p5;
  fn1(p5);
  fn2();
}
