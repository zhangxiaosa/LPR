struct h {
  int i;
  long j;
  int k;
};

int fn1_i;

static int fn1(struct h p5) {
  int p5_i = p5.i;
  w:
    goto w;
}

unsigned int fn2() {
  int p_i;
  long p_j;
  int p_k;
  int r_i;
  long r_j;
  int r_k;

  struct h p;
  struct h r;
  fn1_i = fn1(p).i;

  for (;;) {
    p_i = r_i;
    p_j = r_j;
    p_k = r_k;
    r_i = p_i;
    r_j = p_j;
    r_k = p_k;
  }
}

int main() {}
