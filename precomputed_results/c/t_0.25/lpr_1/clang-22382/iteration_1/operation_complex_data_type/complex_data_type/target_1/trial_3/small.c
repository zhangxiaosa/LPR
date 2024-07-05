struct h {
  int i;
  long j;
  int k;
};

static unsigned int fn1(unsigned int p1, struct h p5) {
  // p5.k;
  w:
  goto w;
}

unsigned int fn2() {
  struct h p;
  fn1(0, p);
  for (;;) {
    struct h r;
    p = r;
  }
}

int main() {}
