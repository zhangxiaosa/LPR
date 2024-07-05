struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(unsigned p1, struct h p5) {
  // p5.k is unused, so we can remove this line
  w:
  goto w;
}

unsigned fn2() {
  // struct h p; // Removed since it is not used
  fn1(0, p);
  for (;;) {
    // struct h r1; // Removed since it is not used
    // p = r1 = p; // Removed since it does not affect the value of p.i
  }
}

int main() {}
