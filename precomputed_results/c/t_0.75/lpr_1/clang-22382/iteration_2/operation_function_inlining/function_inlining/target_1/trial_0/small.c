struct H {
  short i;
  long j;
  unsigned k;
};

unsigned fn2() {
  struct H p;

  // Inlined fn1 body
  // p.k;
w:
  goto w;

  for (;;) {
    p = p;
  }
}