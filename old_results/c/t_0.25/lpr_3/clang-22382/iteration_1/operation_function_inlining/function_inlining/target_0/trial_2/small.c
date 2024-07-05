struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(unsigned p1, short p2, struct h p5) {
  p5.k;
w:
  goto w;
}

int fn2(p1) {
  struct h p;
  int q;
  p.k;
w:
  goto w;
}
