struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(unsigned p1, struct h p5) {
  // Removed unused statement: p5.k;
w:
  goto w;
}

unsigned fn2() {
  // Removed unused variable: struct h p;
  fn1(0, p);
  for (;;) {
    // Removed unused variable: struct h r;
    // Removed assignment: p = p;
  }
}

int main() {}
