typedef unsigned e;

struct h {
  int i;
  long j;
};

static struct h fn1(struct h p5) {
  // p5.k is not used
  w:
  goto w;
}

e fn2() {
  struct h p;
  fn1(p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {}
