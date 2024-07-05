struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(int p5_i, long p5_j, int p5_k) {
  p5_k;
w:
  goto w;
}

unsigned fn2() {
  struct h p;
  fn1(p.i, p.j, p.k);
  for (;;) {
    struct h r;
    p.i = r.i = p.i;
    p.j = r.j = p.j;
    p.k = r.k = p.k;
  }
}

int main() {}
