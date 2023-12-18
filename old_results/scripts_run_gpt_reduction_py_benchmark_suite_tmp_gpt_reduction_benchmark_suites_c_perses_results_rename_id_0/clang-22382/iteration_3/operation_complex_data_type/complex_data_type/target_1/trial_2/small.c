struct original_data_type {
  int i;
  long j;
  unsigned k;
};

static unsigned fn1(unsigned p1, int p5_i, long p5_j, unsigned p5_k) {
  p5_k;
w:
  goto w;
}

unsigned fn2() {
  struct original_data_type p;
  fn1(0, p.i, p.j, p.k);
  while (1) {
    int p_i, r_i;
    long p_j, r_j;
    unsigned p_k, r_k;
    p_i = p.i;
    r_i = p_i;
    p_j = p.j;
    r_j = p_j;
    p_k = p.k;
    r_k = p_k;
    p_i = r_i;
    p_j = r_j;
    p_k = r_k;
  }
}

int main() {}
