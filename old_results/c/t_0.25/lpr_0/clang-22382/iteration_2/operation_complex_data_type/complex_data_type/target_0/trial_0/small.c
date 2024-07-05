struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(int p5_i, long p5_j, int p5_k) {
  // Unused statement p5.k; removed

w:
  goto w;
}

unsigned fn2() {
  int p_i;
  long p_j;
  int p_k;

  fn1(p_i, p_j, p_k);

  for (;;) {
    int r1_i = p_i;
    long r1_j = p_j;
    int r1_k = p_k;

    p_i = r1_i;
    p_j = r1_j;
    p_k = r1_k;
  }
}

int main() {}
