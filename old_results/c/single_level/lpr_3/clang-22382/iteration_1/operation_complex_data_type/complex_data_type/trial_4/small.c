struct h {
  signed i;
  long j;
  unsigned k;
};

static signed fn1(unsigned p1, unsigned p3, unsigned p4, signed i, long j, unsigned k) {
  k;
w:
  goto w;
}

unsigned fn2(unsigned p1) {
  signed i;
  long j;
  unsigned k;
  signed p_i;
  long p_j;
  unsigned p_k;
  signed q;
  struct \{
    signed i;
    long j;
    unsigned k;
  \} r;
  signed p_i;
  long p_j;
  unsigned p_k;
  fn1(q, p1, 3, p_i, p_j, p_k);
  for (;;) {
    signed p_i;
    long p_j;
    unsigned p_k;
    i = p_i;
    j = p_j;
    k = p_k;
  }
}

int main() {}