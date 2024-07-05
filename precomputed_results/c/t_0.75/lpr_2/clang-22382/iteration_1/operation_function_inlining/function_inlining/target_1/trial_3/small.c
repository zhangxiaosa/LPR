struct h {
  int i;
  long j;
  int k;
};

unsigned l;

unsigned fn2(p1) {
  struct h p;
  int q;

  // Inlined function fn1
  // Start of inlined code
  p.k;
w:
  goto w;
  // End of inlined code

  for (;;) {
    struct h r;
    p = r = p;
  }
}