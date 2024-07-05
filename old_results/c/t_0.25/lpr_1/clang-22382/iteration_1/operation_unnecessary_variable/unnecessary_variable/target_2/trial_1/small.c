struct h {
  int i;
  long j;
};

static struct h fn1(unsigned p1, struct h p5) {
  goto w;
}

unsigned fn2() {
  struct h p;
  fn1(0, p);
  for (;;) {
    struct h r;
    p = r;
  }
}

int main() {}
