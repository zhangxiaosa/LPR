struct original_data_type {
  int i;
  long j;
  unsigned k;
};

static struct original_data_type fn1(unsigned p1, short p2,
                                     int p5_i, long p5_j, unsigned p5_k) {
  p5_k;
w:
  goto w;
}

unsigned fn2() {
  int p_i;
  long p_j;
  unsigned p_k;
  
  fn1(0, 0, p_i, p_j, p_k);
  
  for (;;) {
    struct original_data_type r;
    p_i = r.i = p_i;
    p_j = r.j = p_j;
    p_k = r.k = p_k;
  }
}

int main() {}