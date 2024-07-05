struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(struct h p5) {
  p5.k;
w:
  goto w;
}

unsigned fn2() {
  fn1();
  for (;;) {
    struct h r;
    r = r;
  }
}

int main() {}
