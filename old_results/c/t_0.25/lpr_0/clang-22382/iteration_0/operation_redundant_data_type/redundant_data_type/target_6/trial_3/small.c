unsigned i;
long j;
unsigned k;

unsigned l;

static unsigned fn1(unsigned, short, unsigned, unsigned, signed, long, unsigned);
unsigned fn2(unsigned p1) {
  signed i;
  long j;
  unsigned k;
  int q;
  fn1(q, l, p1, 3, i, j, k);
  for (;;) {
    signed r_i;
    long r_j;
    unsigned r_k;
    i = r_i = i;
    j = r_j = j;
    k = r_k = k;
  }
}

unsigned fn1(unsigned p1, short p2, unsigned p3, unsigned p4, signed p5_i, long p5_j, unsigned p5_k) {
  p5_k;
w:;
  goto w;
}