
struct s {
  long i;
  long j;
  unsigned k;
};

static struct s fn1(unsigned p1, unsigned p3, struct s p5) {
  p5.k;
w:
  goto w;
}

unsigned fn2(p1) {
  struct s q;
  fn1(0, p1, q);
  for (;;) {
    long i = q.i;
    long j = q.j;
    unsigned k = q.k;
    q.i = i;
    q.j = j;
    q.k = k;
  }
}

int main() {}
