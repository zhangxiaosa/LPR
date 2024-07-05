struct h {
  int i;
  long j;
};

static struct h fn1(unsigned p1, struct h p5) {
  // No references to p5.k, so we can remove this statement
  // p5.k;
w:
  goto w;
}

unsigned fn2(p1) {
  struct h p;
  fn1(0, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {}
