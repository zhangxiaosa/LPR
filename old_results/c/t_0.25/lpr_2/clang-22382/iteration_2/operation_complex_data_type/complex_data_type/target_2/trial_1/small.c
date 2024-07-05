struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(struct h p5) {
  int p5_i = p5.i;
w:
  goto w;
}

unsigned fn2() {
  struct h p;
  fn1(p);
  for (;;) {
    int r_i;
    long r_j;
    int r_k;
    int p_i;
    long p_j;
    int p_k;
    p_i = r_i = p.i;
    p_j = r_j = p.j;
    p_k = r_k = p.k;
  }
}

int main() {}
