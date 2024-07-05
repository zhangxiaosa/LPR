struct h {
  int i;
  long j;
  unsigned k;
};

int fn2() {
  struct h p;
  unsigned p5_k = p.k;
w:
  goto w;
  for (;;) {
    p = (struct h){p.i, p.j, p.k};
  }
}