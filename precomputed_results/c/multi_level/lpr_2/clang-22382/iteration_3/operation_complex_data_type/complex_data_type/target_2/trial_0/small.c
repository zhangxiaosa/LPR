struct Data {
  int i;
  long j;
  unsigned k;
};

static void fn1(int p5_i, long p5_j, unsigned int p5_k) {
  p5_k;
w:
  goto w;
}

unsigned int fn2() {
  int p_i;
  long p_j;
  unsigned int p_k;
  fn1(p_i, p_j, p_k);
  for (;;) {
    int r1_i;
    long r1_j;
    unsigned int r1_k;
    p_i = r1_i = p_i;
    p_j = r1_j = p_j;
    p_k = r1_k = p_k;
  }
}

int main() {}