struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(struct h p5) {
  int p5_i = p5.i;
  long p5_j = p5.j;
  int p5_k = p5.k;

w:
  goto w;
}

unsigned fn2() {
  struct h p;
  int p_i = p.i;
  long p_j = p.j;
  int p_k = p.k;

  fn1(p);

  for (;;) {
    struct h r;
    int r_i = r.i;
    long r_j = r.j;
    int r_k = r.k;

    p_i = r_i;
    p_j = r_j;
    p_k = r_k;

    r.i = p_i;
    r.j = p_j;
    r.k = p_k;
  }
}

int main() {}
