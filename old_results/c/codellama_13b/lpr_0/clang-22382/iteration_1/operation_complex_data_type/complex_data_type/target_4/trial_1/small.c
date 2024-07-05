
struct s {
  long i;
  long j;
  unsigned k;
};

struct s[] fn1(unsigned p1, unsigned p3, struct s[] p5) {
  p5[p5.k].k;
w:;
  goto w;
}

unsigned fn2(unsigned p1) {
  struct s q;
  fn1(0, p1, q);
  for (;;) {
    struct s r = q;
    q = r;
  }
}

int main() {
  return 0;
}
