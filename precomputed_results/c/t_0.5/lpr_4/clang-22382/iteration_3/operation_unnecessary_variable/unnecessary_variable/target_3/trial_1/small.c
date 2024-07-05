struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(unsigned p1, struct h p5) {
  // No change in fn1
  int p5_i = p5.i;
w:
  goto w;
}

unsigned fn2() {
  struct h r;
  fn1(0, r);
  for (;;) {
    r = r;
  }
}

int main() {}