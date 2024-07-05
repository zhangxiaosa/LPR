unsigned l;

unsigned fn1(unsigned, short, unsigned, int, long, int);
unsigned fn2(unsigned p1) {
  int p;
  fn1(p1, l, 3, 0, 0, 0);
  for (;;) {
    int r;
    p = r = p;
  }
}

unsigned fn1(unsigned p1, short p3, unsigned p5, int p6_i, long p6_j, int p6_k) {
w:;
  goto w;
}