struct h {
  signed i;
  long j;
  unsigned k;
};

static struct h fn1(struct h p5) {
  // Optimized: Removed unused statement
  // p5.k;
  return p5;
}

unsigned fn2() {
  struct h p;
  p = fn1(p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {}
