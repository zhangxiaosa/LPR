signed i;
long j;
unsigned k;

unsigned l;

static unsigned fn1(unsigned, short, unsigned, long, unsigned);
unsigned fn2(p1) {
  unsigned i;
  long j;
  unsigned k;
  fn1(i, l, i, j, k);
  for (;;) {
    unsigned i;
    long j;
    unsigned k;
    i = j = i;
  }
}

unsigned fn1(unsigned p1, short p2, unsigned p3, long p4, unsigned p5) {
  p5;
w:
  goto w;
}