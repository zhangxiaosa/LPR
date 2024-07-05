struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(unsigned p1, struct h p5) {
  // Remove unused statement: p5.k;
  w:
  goto w;
}

unsigned fn2(unsigned p1) {
  struct h p;
  fn1(0, p);
  for (;;) {
    struct h r;
    // Remove unused assignment: p = r = p;
  }
}

int main() {}
