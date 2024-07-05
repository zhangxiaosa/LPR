
// After constant propagation
struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(unsigned p1, int p2, struct h p5) {
  p5.k;
  goto w;
}

unsigned fn2(p1) {
  struct h r;
  fn1(3, 3, r);
  for (;;) {
    r = r;
  }
}

int main() {
  // ...
}
