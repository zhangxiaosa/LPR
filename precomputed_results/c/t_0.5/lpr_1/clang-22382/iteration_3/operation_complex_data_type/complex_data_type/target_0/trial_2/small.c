struct h {
  int i;
  long j;
  int k;
};

static int fn1_k();

unsigned fn2() {
  int i;
  long j;
  int k;
  int p_i;
  long p_j;
  int p_k;

  struct h p;
  fn1_k(p_i, p_j, p_k);

  for (;;) {
    int r_i;
    long r_j;
    int r_k;
    struct h r;

    p_i = r_i = p_i;
    p_j = r_j = p_j;
    p_k = r_k = p_k;
  }
}

int fn1_k(int p5_i, long p5_j, int p5_k) {
  p5_k;

w:
  goto w;
}

int main() {}
