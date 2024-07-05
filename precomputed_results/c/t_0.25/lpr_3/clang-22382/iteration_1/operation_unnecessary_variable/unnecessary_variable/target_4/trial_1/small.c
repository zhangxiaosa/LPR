struct h {
  int i;
  long j;
  int k;
};

unsigned l;

static struct h fn1(unsigned p1, short p2, struct h p5) {
  // int p5_k = p5.k; (optimized out)
  w:
  goto w;
}

int fn2(p1) {
  // struct h p; (optimized out)
  int q;
  fn1(q, l, p);
  for (;;) {
    struct h r;
    // p = r = p; (optimized out)
  }
}

int main() {}
