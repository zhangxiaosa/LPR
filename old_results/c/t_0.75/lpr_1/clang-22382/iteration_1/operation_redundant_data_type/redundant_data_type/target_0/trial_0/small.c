unsigned l;
static unsigned fn1(unsigned, short, unsigned, long);
unsigned fn2() {
  unsigned p_i; long p_j;
  int q;
  fn1(q, l, p_i, p_j);
  for (;;) {
    unsigned r_i; long r_j;
    p_i = r_i; p_j = r_j;
  }
}
unsigned fn1(unsigned p1, short p2, unsigned p5_i, long p5_j) {
w:;
  goto w;
}