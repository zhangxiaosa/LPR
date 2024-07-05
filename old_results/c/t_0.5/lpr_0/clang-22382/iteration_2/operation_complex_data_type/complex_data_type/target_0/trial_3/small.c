struct h {
  signed int i;
  long j;
  unsigned int k;
};

static struct h fn1(struct h p5) {
  // Unused expression: p5.k
  w:
    goto w;
}

unsigned int fn2() {
  unsigned int p_i;
  long p_j;
  unsigned int p_k;

  fn1((struct h){p_i, p_j, p_k});

  for (;;) {
    struct h r;
    p_i = r.i;
    p_j = r.j;
    p_k = r.k;
    r.i = p_i;
    r.j = p_j;
    r.k = p_k;
  }
}

int main() {}
