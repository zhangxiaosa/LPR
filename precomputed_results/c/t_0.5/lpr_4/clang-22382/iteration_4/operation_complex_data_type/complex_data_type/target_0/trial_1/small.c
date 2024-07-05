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
  int p_i;
  long p_j;
  int p_k;
  int r_i;
  long r_j;
  int r_k;

  struct h p;
  struct h r;
  fn1(p);
  
  p_i = p.i;
  p_j = p.j;
  p_k = p.k;

  r_i = r.i;
  r_j = r.j;
  r_k = r.k;

  for (;;) {
    p_i = r_i = p_i;
    p_j = r_j = p_j;
    p_k = r_k = p_k;
  }
}

int main() {}