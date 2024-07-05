
struct s {
  long i;
  long j;
  unsigned k;
};

static struct s fn1(unsigned p1, struct s p5) {
  p5.k;
w:;
  goto w;
}

unsigned fn2(p1) {
  struct s q;
  fn1(0, q);
  for (;;) {
    struct s r = q;
    q = r;
  }
}

int main() {
  struct s s1;
  s1.i = 0;
  s1.j = 0;
  s1.k = 0;
  fn2(0);
  return 0;
}
