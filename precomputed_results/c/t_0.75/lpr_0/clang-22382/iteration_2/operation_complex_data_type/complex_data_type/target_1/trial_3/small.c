struct h {
  int i;
  long j;
  int k;
};

static int fn1_i(struct h p5) {
  return p5.i;
}

static long fn1_j(struct h p5) {
  return p5.j;
}

static int fn1_k(struct h p5) {
  return p5.k;
}

unsigned int fn2() {
  struct h p;
  fn1_i(p);
  fn1_j(p);
  fn1_k(p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {}
