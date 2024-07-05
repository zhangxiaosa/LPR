struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(unsigned p1, struct h p5) {
  int p5_i = p5.i;
  long p5_j = p5.j;
  int p5_k = p5.k;

w:
  goto w;
}

unsigned fn2() {
  struct h p;
  fn1(0, p);
  for (;;) {
    struct h r;
    int r_i = r.i;
    long r_j = r.j;
    int r_k = r.k;
    p.i = r_i;
    p.j = r_j;
    p.k = r_k;
  }
}

int main() {}
