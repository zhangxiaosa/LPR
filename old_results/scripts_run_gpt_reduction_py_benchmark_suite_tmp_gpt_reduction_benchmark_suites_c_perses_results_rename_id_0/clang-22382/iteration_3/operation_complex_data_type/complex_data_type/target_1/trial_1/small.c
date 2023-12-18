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
  int p_i;
  long p_j;
  unsigned p_k;
  fn1(0, p_i, p_j, p_k);
  while (1) {
    struct original_data_type r;
    p = r = p;
  }
}

int main() {}