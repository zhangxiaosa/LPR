c
struct s {
  int i;
  long j;
  unsigned k;
};

static struct s fn1(unsigned p1, unsigned p3, struct s p5) {
  p5.k;
w:;
  goto w;
}

unsigned fn2(p1) {
  struct s q;
  fn1(0, p1, q);

  struct s r = q;
  q = r;
  struct s r = q;
  q = r;
  struct s r = q;
  q = r;
  struct s r = q;
  q = r;
  struct s r = q;
  q = r;
  struct s r = q;
  q = r;

  return 0;
}

int main() {
  return 0;
}
