
struct s {
  int i;
  long j;
  unsigned k;
};

unsigned l;

static struct s fn1(unsigned p1, signed p2, unsigned p3, unsigned p4,
                    struct s p5) {
  p5.k;
w:;
  goto w;
}

unsigned fn2(p1) {
  struct s p;
  signed q;
  fn1(q, 0, p1, 3, p);
  for (;;) {
    int i = p.i;
    long j = p.j;
    unsigned k = p.k;
    p = {i, j, k};
  }
}

int main() {
  struct s s;
  int i = s.i;
  long j = s.j;
  unsigned k = s.k;

  return 0;
}
