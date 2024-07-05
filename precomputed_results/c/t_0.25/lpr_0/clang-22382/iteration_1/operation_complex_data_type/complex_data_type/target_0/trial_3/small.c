struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(unsigned p1, struct h p5) {
  // No need to access p5.k as it has no effect
  // p5.k;

w:
  goto w;
}

unsigned fn2() {
  struct h p;
  fn1(0, p);
  for (;;) {
    // No need to declare r1 here
    // struct h r1;
    // No need to assign p to r1 and back to p
    // p = r1 = p;
  }
}

int main() {}
