struct h {
  int i;
  long j;
  int k;
};

unsigned l;

static struct h fn1(unsigned p1, short p2, unsigned p3, unsigned p4, struct h p5) {
  // p5.k; (removed)
  w:
  goto w;
}

int fn2(p1) {
  struct h p;
  int q;
  fn1(q, l, 0, 3, p); // p1 replaced with 0
  for (;;) {
    struct h r;
    p = r;
  }
}

int main() {}
