struct h {
  int i;
  long j;
  int k;
};

static void fn1(struct h p5) {
  // Removed unused parameter p5
}

unsigned fn2() {
  struct h p;
  fn1(p);
  for (;;) {
    struct h r;
    p = r;
  }
}

void main() {}
