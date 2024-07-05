struct h {
  int i;
  long j;
  int k;
};

static int p5_i(struct h p5) {
  return p5.i;
}

static long p5_j(struct h p5) {
  return p5.j;
}

static int p5_k(struct h p5) {
  return p5.k;
}

static struct h fn1(struct h p5) {
  p5.k;
w:
  goto w;
}

unsigned fn2() {
  struct h p;
  fn1(p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {}
