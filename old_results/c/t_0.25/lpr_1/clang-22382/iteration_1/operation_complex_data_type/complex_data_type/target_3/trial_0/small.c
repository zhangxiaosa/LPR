struct h {
  int i;
  long j;
  int k;
};

static int fn1_i(unsigned p1, int p5_i) {
  p5_i;
w:
  goto w;
}

static long fn1_j(unsigned p1, long p5_j) {
  p5_j;
w:
  goto w;
}

static int fn1_k(unsigned p1, int p5_k) {
  p5_k;
w:
  goto w;
}

unsigned fn2() {
  int p_i;
  long p_j;
  int p_k;
  fn1_i(0, p_i);
  fn1_j(0, p_j);
  fn1_k(0, p_k);
  for (;;) {
    int r_i;
    long r_j;
    int r_k;
    p_i = r_i = p_i;
    p_j = r_j = p_j;
    p_k = r_k = p_k;
  }
}

int main() {}
