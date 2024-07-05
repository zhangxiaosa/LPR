
struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(unsigned p1, int p2, struct h p5) {
  p5.k;

  // Optimized loop
  for (int i = 0; i < p1; i++) {
    struct h r = p;
    p = r;
  }

  goto w;
}

unsigned fn2(p1) {
  struct h p;
  fn1(3, 3, p);

  // Optimized loop
  for (int i = 0; i < p1; i++) {
    struct h r = p;
    p = r;
  }
}

int main() {}
