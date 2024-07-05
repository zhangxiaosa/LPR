struct h {
  int i;
  long j;
};

static struct h fn1(unsigned p1, struct h p5) {
  // p5.k is not used
  w:
  goto w;
}

unsigned fn2() {
  struct h p;
  fn1(0, p);
  for (;;) {
    struct h r1;
    p = r1 = p;
  }
}

int main() {}
