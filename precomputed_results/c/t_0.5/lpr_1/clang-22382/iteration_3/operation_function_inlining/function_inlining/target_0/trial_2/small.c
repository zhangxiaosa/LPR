struct h {
  int i;
  long j;
  int k;
};

unsigned fn2() {
  struct h p;
  p.k;
  for (;;) {
    p = p;
  }
}
