struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(unsigned p1, struct h p5) {
  // p5.k; - Removed unused statement

  // Loop unrolled three times
  goto w1;
w1:
  goto w2;
w2:
  goto w3;
w3:
  goto w1;
}

unsigned fn2(p1) {
  struct h p;
  fn1(0, p);

  // Three iterations of the loop unrolled
  struct h r;

  // Iteration 1
  p = r = p;

  // Iteration 2
  p = r = p;

  // Iteration 3
  p = r = p;
}

int main() {
  // No modifications required
}