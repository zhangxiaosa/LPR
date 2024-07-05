
struct h {
  long i;
  long j;
  long k;
};

static struct h fn1(int p1, int p2, int p3, struct h p4) {
  // p4.k is unused, so we can optimize it out
  goto w;

w:
  // The loop is infinite, so we can optimize it out
  while (1)
    p = r = p;
}

int fn2(p1) {
  struct h p;
  struct h r;
  fn1(0, p1, p1, p);
  // The loop is infinite, so we can optimize it out
  while (1)
    p = r = p;
}

int main() {
  // Nothing to optimize in main()
}
