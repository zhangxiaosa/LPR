struct h {
  int i;
  long j;
  unsigned k;
};

static int fn1(int p5_i, long p5_j, unsigned p5_k) {
  p5_k;
w:
  goto w;
}

unsigned fn2() {
  int p_i;
  long p_j;
  unsigned p_k;
  fn1(p_i, p_j, p_k);
  for (;;) {
    int r1_i;
    long r1_j;
    unsigned r1_k;
    p_i = r1_i = p_i;
    p_j = r1_j = p_j;
    p_k = r1_k = p_k;
  }
}

int main() {}