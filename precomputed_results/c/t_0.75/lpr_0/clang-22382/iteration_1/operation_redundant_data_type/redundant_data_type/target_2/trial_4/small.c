signed int i;
long j;
unsigned int k;

static signed int fn1(unsigned int, short, signed int, long, unsigned int);
signed int fn2(p1) {
  signed int p_i;
  long p_j;
  unsigned int p_k;
  int q;
  fn1(q, l, p_i, p_j, p_k);
  for (;;) {
    signed int r_i;
    long r_j;
    unsigned int r_k;
    p_i = r_i;
    p_j = r_j;
    p_k = r_k;
  }
}

signed int fn1(unsigned int p1, short p2, signed int p5_i, long p5_j, unsigned int p5_k) {
  p5_k;
w:
  goto w;
}